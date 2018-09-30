#pragma once
#include <iostream>
#include <vector>

namespace _2
{
	void arrays_introduction()
	{
		std::vector<int> num;
		int a(0);
		std::cin >> a;
		for (int i = 0; i<a; i++) {
			int b(0);
			std::cin >> b;
			num.push_back(b);
		}
		for (auto it = num.rbegin(); it != num.rend(); it++) {
			std::cout << *it << " ";
		}
	}
}