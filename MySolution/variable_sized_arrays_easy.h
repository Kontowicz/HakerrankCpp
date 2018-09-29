#pragma once
#include <iostream>
#include <vector>

void sized_arrays()
{
	int arrays(0); 
	int query(0);
	std::cin >> arrays >> query;
	std::vector<std::vector<int>> table(arrays);
	for(int i=0; i<query; i++)
	{
		int len(0);
		std::cin >> len;
		table[i].resize(len);
		for(int j=0; j<len; j++)
		{
			std::cin>>table[i][j];
		}
	}
	for(int i =0; i<query; i++)
	{
		int a(0);
		int b(0);
		std::cin >> a >> b;
		std::cout << table[a][b]<<"\n";
	}
}
