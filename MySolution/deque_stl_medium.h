#pragma once

namespace _39
{
	void printKMax(std::vector<int> arr, int n, int k){
		//Write your code here.
		std::vector<int> tmp;
		for(int i = 0; i <= n - k; ++i)
		{
			int max = arr[i];
			int j = 0;
			for(int j = 0; j < k; ++j)
			{
				if(max <= arr[i+j])
				{
					max = arr[i+j];
				}
			}
			tmp.push_back(max);
		}
		for(auto e: tmp)
			std::cout<< e << " ";
		std::cout<<"\n";
	}

	void deque_stl()
	{
		int t;
		cin >> t;
		while(t>0) {
			int n,k;
			cin >> n >> k;
			int i;
			std::vector<int> arr;
			arr.resize(n);
			for(i=0;i<n;i++)
				cin >> arr[i];
			printKMax(arr, n, k);
			t--;
		}
	}
}
