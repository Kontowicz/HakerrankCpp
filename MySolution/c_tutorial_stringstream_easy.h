#pragma once
#include <vector>
#include <iostream>
#include <string>
#include <sstream>

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

void string_stream()
{
	std::string tmp;
	std::cin >> tmp;
	std::vector<int> integers = parseInts(tmp);
	for (int i = 0; i < integers.size(); i++) {
		std::cout << integers[i] << "\n";
	}
}