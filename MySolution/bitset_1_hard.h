#pragma once

namespace _3
{
	void bitset_1()
	{
			int n, s, p, q;
		std::cin>>n>>s>>p>>q;

		int first, second;
		first = s % int(pow(2,31));
		for(int i = 1; i< n; ++i)
		{
			second = first*p+q % int(pow(2,31));
			if(first == second)
			{
				std::cout<< --i<<"\n";

			}
			first = second;
		}
		std::cout<< n<< "\n";

	}
}
