#pragma once
#include <vector>
#include <iostream>
#include <algorithm>

namespace _18
{
	void cpp_lower_bound()
	{
		std::vector<int> tmp;
		int c(0);
		std::cin >> c;
		for(int i=0; i<c; i++)
		{
			int p(0);
			std::cin >> p;
			tmp.push_back(p);
		}
		std::cin >> c;

		for(int i=0; i<c; i++)
		{
			int p(0);
			std::cin >> p;
			std::vector<int>::iterator low = std::lower_bound(tmp.begin(), tmp.end(), p);
			if (tmp[low - tmp.begin()] == p)
				std::cout << "Yes " << (low - tmp.begin() + 1) << std::endl;
			else
				std::cout << "No " << (low - tmp.begin() + 1) << std::endl;
			
		}
	}
}