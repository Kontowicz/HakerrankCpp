#pragma once
#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>


void vecotor_sort()
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
	std::sort(tmp.begin(), tmp.end());
	for (auto i : tmp)
		std::cout << i << ' ';
}
