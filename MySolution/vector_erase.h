#pragma once
#include <vector>
#include <iostream>
#include <iterator>

void vector_erase()
{
	std::vector<int> tmp;
	int c(0);
	std::cin >> c;
	for (int i=0; i<c; i++)
	{
		int p(0);
		std::cin >> p;
		tmp.push_back(p);
	}
	std::cin >> c;
	int first(0);
	int second(0);
	std::cin >> first;
	std::cin >> second;
	tmp.erase(tmp.begin() + c - 1);
	tmp.erase(tmp.begin() + first - 1, tmp.begin() + second - 1);
	std::cout << tmp.size()<<'\n';
	for (auto i : tmp)
		std::cout << i << ' ';
	std::cout << "\n";
}
