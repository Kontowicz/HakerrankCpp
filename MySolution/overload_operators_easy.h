#pragma once
#include <string>
#include <iostream>

namespace _29
{
	class Complex
	{
	public:
		int a, b;
		void input(std::string s)
		{
			int v1 = 0;
			int i = 0;
			while (s[i] != '+')
			{
				v1 = v1 * 10 + s[i] - '0';
				i++;
			}
			while (s[i] == ' ' || s[i] == '+' || s[i] == 'i')
			{
				i++;
			}
			int v2 = 0;
			while (i<s.length())
			{
				v2 = v2 * 10 + s[i] - '0';
				i++;
			}
			a = v1;
			b = v2;
		}
	};

	Complex operator +(const Complex&c, const Complex&c1) {
		Complex toRet;
		toRet.a = c.a + c1.a;
		toRet.b = c.b + c1.b;
		return toRet;
	}

	std::ostream &operator << (std::ostream & out, const Complex &c) {
		return out << c.a << (c.b > 0 ? '+' : '-') << 'i' << c.b;
	}


	void overload_operators()
	{
		Complex x, y;
		std::string s1, s2;
		std::cin >> s1;
		std::cin >> s2;
		x.input(s1);
		y.input(s2);
		Complex z = x + y;
		std::cout << z << "\n";
	}
}