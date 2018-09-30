#pragma once
#include <vector>
#include <iostream>
#include <string>
#include <sstream>

namespace _13
{
	std::vector<int> parseInts(std::string str) {
		std::stringstream ss(str);  
		std::vector<int> toRet;
		char ch;
		int n;
		while (ss >> n) {      
			toRet.push_back(n);
			ss >> ch;           
		}
		return toRet;
	}

	void c_tutorial_stringstream()
	{
		std::string tmp;
		std::cin >> tmp;
		std::vector<int> integers = parseInts(tmp);
		for (int i = 0; i < integers.size(); i++) {
			std::cout << integers[i] << "\n";
		}
	}
}