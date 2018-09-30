#pragma once
#include <iostream>

namespace _17
{
	void cpp_input_and_output()
	{
		int a(0);
		int b(0);
		int c(0);
		std::cin >> a >> b >> c;
		std::cout << a + b + c;
	}
}
