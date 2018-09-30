import os 
import re

def get_files(path):
	files = os.listdir(path)
	final_easy = []
	final_medium = []
	final_hard = []
	for file in files:
	

				
		if file[len(file)-6:len(file)] == 'easy.h' and file != 'include_easy.h':
			tmp = open(path+file, 'r')
			lines = tmp.readlines()
			for line in lines:
				if line.find('namespace') != -1 and line.find('using') == -1:
					matchObj = re.search( r'_[0-9]+', line)
					final_easy.append([file, matchObj.group()])
					break;
						

		if file[len(file)-8:len(file)] == 'medium.h' and file != 'include_medium.h':
			tmp = open(path+file, 'r')
			lines = tmp.readlines()
			for line in lines:
				if line.find('namespace') != -1 and line.find('using') == -1:
					matchObj = re.search( r'_[0-9]+', line)
					final_medium.append([file, matchObj.group()])
					break;

		if file[len(file)-6:len(file)] == 'hard.h' and file != 'include_hard.h':
			tmp = open(path+file, 'r')
			lines = tmp.readlines()
			for line in lines:
				if line.find('namespace') != -1 and line.find('using') == -1:
					matchObj = re.search( r'_[0-9]+', line)
					final_hard.append([file, matchObj.group()])
					break;

	print('Easy: ', final_easy.__len__())
	print('Medium: ', final_medium.__len__())
	print('Hard: ', final_hard.__len__())
	return final_easy, final_medium, final_hard
	
def add_top(path):
	file = open(path + 'README.md', 'w')
	file.write('<H1>C++<H1>\n\n')
	file.close()
	
def generate_easy(easy, path):
	print(len(easy))
	tmp = []
	for e in easy:
		tmp.append( [e[0][0].upper() + e[0][1:-6].replace('_',' '), ('https://www.hackerrank.com/challenges/%s/problem' %(e[0][:-7].replace('_','-'))), e[0], ])
	file = open(path+'README.md', 'w')
	file.write('<H3>Easy<H3>\n\n')
	file.write('|Number| Hackerrank exercise | MySolution |\n')
	file.write('|------|---------------------|------------|\n')
	counter = 1
	for t in tmp:
		file.write('|%d|[%s](%s)|[MySolution](../master/MySolution/%s)|\n' %(counter, t[0], t[1], t[2]))
		counter = counter + 1
	file.close()

def generate_medium(medium, path):
	if len(medium) > 0:
		tmp = []
		for e in medium:
			tmp.append( [e[0][0].upper() + e[0][1:-6].replace('_',' '), ('https://www.hackerrank.com/challenges/%s/problem' %(e[0][:-7].replace('_','-'))), e[0], ])
		file = open(path+'README.md', 'a')
		file.write('\n\n<H3>Medium<H3>\n\n')
		file.write('|Number| Hackerrank exercise | MySolution |\n')
		file.write('|------|---------------------|------------|\n')
		counter = 1
		for t in tmp:
			file.write('|%d|[%s](%s)|[MySolution](../master/MySolution/%s)|\n' %(counter, t[0], t[1], t[2]))
			counter = counter + 1
		file.close()
	
def generate_hard(hard, path):
	if len(hard) > 0:
		tmp = []
		for e in hard:
			tmp.append( [e[0][0].upper() + e[0][1:-6].replace('_',' '), ('https://www.hackerrank.com/challenges/%s/problem' %(e[0][:-7].replace('_','-'))), e[0], ])
		file = open(path+'README.md', 'a')
		file.write('\n\n<H3>Hard<H3>\n\n')
		file.write('|Number| Hackerrank exercise | MySolution |\n')
		file.write('|------|---------------------|------------|\n')
		counter = 1
		for t in tmp:
			file.write('|%d|[%s](%s)|[MySolution](../master/MySolution/%s)|\n' %(counter, t[0], t[1], t[2]))
			counter = counter + 1
		file.close()
		
def generate_include(path, files):
	file = open(path+'include_easy.h', 'w')
	file.write('#pragma once\n')
	for file_name in files[0]:
		print(file_name)
		file.write('#include "' + file_name[0] +'"\n')
		
	file = open(path+'include_medium.h\n', 'w')
	file.write('#pragma once')
	for file_name in files[1]:
		file.write('#include "' + file_name[0] +'"\n')
		
	file = open(path+'include_hard.h\n', 'w')
	file.write('#pragma once')
	for file_name in files[2]:
		file.write('#include "' + file_name[0] +'"\n')
		
		
def generate_main(path, functions):
	main_file = open(path+'main.cpp', 'w')
	main_file.write('#include "include_easy"\n')
	main_file.write('#include "include_medium"\n')
	main_file.write('#include "include_hard"\n')
	main_file.write('#include <iostream>\n\n')
	
	main_file.write('void print()\n{\n')
	
	tmp = []
	cnt = 1
	for func in functions:
		for f in func:
			if f[0][len(f[0])-6:len(f[0])] == 'easy.h':
				main_file.write('\tstd::cout << ' + str(cnt) + ' << ' + str(f[0][0:len(f[0])-7]) + ' << std::endl;\n')
			if f[0][len(f[0])-8:len(f[0])] == 'medium.h':
				main_file.write('\tstd::cout << ' + str(cnt) + ' << ' + str(f[0][0:len(f[0])-9]) + ' << std::endl;\n')
			if f[0][len(f[0])-6:len(f[0])] == 'hard.h':
				main_file.write('\tstd::cout << ' + str(cnt) + ' << ' + str(f[0][0:len(f[0])-5]) + ' << std::endl;\n')
			tmp.append([cnt, f[0], f[1]])
			cnt = cnt + 1
	main_file.write('}\n\n')
	
	print(tmp)
	
	main_file.write('\n\nint main()\n{\n')
	main_file.write('\tint n(0);\n\tdo\n\t{\n\t\tprint();\n\t\tstd::cin >> n;\n\t\tstd::cin.clear();\n\t\tstd::cin.ignore();\n\t\tswitch (n)\n\t\t{\n')
		
	for fun in tmp:
		main_file.write('\t\t\tcase ' + str(fun[0]) + ': '+ str(fun[2]) +'::'+str(fun[1])+'; break;\n')
		
	main_file.write('\t\t\tcase 0: break;\n\t\t}\n\t} while (n > 0);\n\treturn 0;\n}')
	
	
	
path_to_directory = 'C:/Users/Alina/Desktop/Piotrek/new/HakerrankCpp/MySolution/'
path_to_readme =    'C:/Users/Alina/Desktop/Piotrek/new/HakerrankCpp/'

add_top( path_to_readme )
file = get_files(path_to_directory)

generate_main(path_to_directory, file)
generate_include(path_to_directory, file)
generate_easy(file[0], path_to_readme)
generate_medium(file[1], path_to_readme)
generate_hard(file[2], path_to_readme)
