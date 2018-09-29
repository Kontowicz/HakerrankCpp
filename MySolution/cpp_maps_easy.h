#pragma once
#include <map>
#include <iostream>
#include <string>

void maps()
{
	std::map < std::string, int > tmp;
	int c(0);
	std::cin >> c;
	for(int i = 0; i<c; i++)
	{
		std::string str;
		int num(0);
		int quer(0);
		std::cin >> quer;
		switch (quer)
		{
		case 1:
			{
			std::cin >> str >> num;
			tmp[str]+=num;
			break;
			}
		case 2:
			{
			std::cin >> str;
			tmp.erase(str);
			break;
			}
		case 3:
			{
			std::cin >> str;
			std::cout << tmp[str]<<"\n";
			break;
			}
		}
	}
}
