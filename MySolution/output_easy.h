#pragma once
#include <iostream>

void output()
{
	int a(0);
	int b(0);
	int c(0);
	std::cin >> a >> b >> c;
	std::cout << a + b + c;
}
