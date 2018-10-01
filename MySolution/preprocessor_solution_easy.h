#pragma once
#include <iostream>
#include <vector>

#define toStr(x) #x
#define io(v) std::cin>>v
#define foreach(v, i) for(int i=0; i<v.size(); i++)
#define INF 100000000
#define FUNCTION(which, sign) void which(int& limit, const int& v){(v sign limit)?(limit=v):limit=limit;}
#if !defined toStr || !defined io || !defined FUNCTION || !defined INF
#error Missing preprocessor definitions
#endif 

FUNCTION(minimum, < )
	FUNCTION(maximum, > )
using namespace std;
namespace _38
{


	void preprocessor_solution()
	{
		int n; cin >> n;
		vector<int> v(n);
		foreach(v, i) {
			io(v)[i];
		}
		int mn = INF;
		int mx = -INF;
		foreach(v, i) {
			minimum(mn, v[i]);
			maximum(mx, v[i]);
		}
		int ans = mx - mn;
		cout << toStr(Result =) <<' '<< ans;


	}
}