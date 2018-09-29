import os 
import re

def get_files(path):
	files = os.listdir(path)
	final_easy = []
	final_medium = []
	final_hard = []
	for file in files:
		if file[len(file)-6:len(file)] == 'easy.h' and file != 'include_easy.h':
			final_easy.append(file)
		if file[len(file)-8:len(file)] == 'medium.h' and file != 'include_medium.h':
			final_medium.append(file)
		if file[len(file)-6:len(file)] == 'hard.h' and file != 'include_hard.h':
			final_hard.append(file)
	print('Easy')
	print(final_easy)
	print('\n\nMedium')
	print(final_medium)
	print('\n\nHard')
	print(final_hard)
	return final_easy, final_medium, final_hard
	
def add_top(path):
	file = open(path + 'README.md', 'w')
	file.write('<H1>C++<H1>\n\n')
	file.close()
	
def generate_easy(easy, path):
	print(len(easy))
	tmp = []
	for e in easy:
		tmp.append( [e[0].upper() + e[1:-6].replace('_',' '), ('https://www.hackerrank.com/challenges/%s/problem' %(e[:-7].replace('_','-'))), e, ])
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
			tmp.append( [e[0].upper() + e[1:-6].replace('_',' '), ('https://www.hackerrank.com/challenges/%s/problem' %(e[:-7].replace('_','-'))), e, ])
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
			tmp.append( [e[0].upper() + e[1:-6].replace('_',' '), ('https://www.hackerrank.com/challenges/%s/problem' %(e[:-7].replace('_','-'))), e, ])
		file = open(path+'README.md', 'a')
		file.write('\n\n<H3>Hard<H3>\n\n')
		file.write('|Number| Hackerrank exercise | MySolution |\n')
		file.write('|------|---------------------|------------|\n')
		counter = 1
		for t in tmp:
			file.write('|%d|[%s](%s)|[MySolution](../master/MySolution/%s)|\n' %(counter, t[0], t[1], t[2]))
			counter = counter + 1
		file.close()
		
add_top( 'C:/Users/Alina/Desktop/Piotrek/new/HakerrankCpp' )
path_to_directory = 'C:/Users/Alina/Desktop/Piotrek/new/HakerrankCpp/MySolution/'
path_to_readme =    'C:/Users/Alina/Desktop/Piotrek/new/HakerrankCpp/'
file = get_files(path_to_directory)
generate_easy(file[0], path_to_readme)
generate_medium(file[1], path_to_readme)
generate_hard(file[2], path_to_readme)
