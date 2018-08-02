#pragma once
#include <iostream>

void dataTypes()
{
	int integer(0);
	long int longInt(0);
	char char_('a');
	float float_(0);
	double double_(0);
	std::cin >> integer >> longInt >> char_ >> float_ >> double_;
	std::cout << integer << "\n";
	std::cout.setf(std::ios::fixed);
	std::cout << longInt << "\n";
	std::cout << char_ << "\n";
	std::cout.precision(3);
	std:std::cout << float_<<"\n";
	std::cout.precision(9);
	std::cout << double_;
}