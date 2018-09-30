#pragma once
#include <string>
#include <iostream>

namespace _12
{
	void c_tutorial_strings()
	{
		std::string str;
		std::string str_;
		std::cin >> str >> str_;
		std::cout << str.length() << " " << str_.length() << "\n";
		std::cout << str + str_ << "\n";
		std::swap(str[0], str_[0]);
		std::cout << str << " " << str_<<"\n";
	}
}