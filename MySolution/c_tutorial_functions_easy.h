#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

namespace _10
{
	int max(const std::vector<int>&a)
	{
		return *std::max_element(a.begin(), a.end());
	}

	void c_tutorial_functions()
	{
		std::vector<int> numbers;
		for(int i = 0; i<4; i++)
		{
			int a(0);
			std::cin >> a;
			numbers.push_back(a);
		}
		std::cout << max(numbers);
	}
}