#pragma once
#include <set>
#include <iostream>

namespace _20
{
	void cpp_sets()
	{
		int c(0);
		std::set<int> ss;
		std::cin >> c;
		for (int i = 0; i<c; ++i) {
			int tmp, tmp1;
			std::cin >> tmp >> tmp1;
			switch (tmp) {
			case 1:
				ss.insert(tmp1);
				break;
			case 2:
				ss.erase(tmp1);
				break;
			case 3:
				std::cout << (ss.find(tmp1) == ss.end() ? "No" : "Yes") << std::endl;
				break;
			}
		}
	}
}