#pragma once
#include <ostream>
#include <iostream>

namespace _4
{

	class Box
	{
	public:
		Box()
		{
			this->l = 0;
			this->b = 0;
			this->h = 0;
		}

		Box(int a, int b, int c)
		{
			this->l = a;
			this->b = b;
			this->h = c;
		}

		Box(const Box&tmp)
		{
			this->l = tmp.l;
			this->b = tmp.b;
			this->h = tmp.h;
		}

		int getLength()
		{
			return this->l;
		}

		int getBreadth()
		{
			return  this->b;
		}

		int getHeight()
		{
			return this->h;
		}

		long long CalculateVolume()
		{
			return this->l*this->b*this->h;
		}

		friend bool operator<(const Box& b, const Box& c)
		{
			if((b.l<c.l) || (b.b<c.b && b.l==c.l) || (b.h<b.h && b.b==c.b && c.l==c.l))
			{
				return true;
			}else
			{
				return false;
			}
		}

		friend std::ostream& operator <<(std::ostream& out, const Box& B)
		{
			return out << B.l << " " << B.b << " " << B.h;
		}

		long l;
		long b;
		long h;
	};


	void box_it()
	{
		int n;
		std::cin >> n;
		Box temp;
		for (int i = 0; i<n; i++)
		{
			int type;
			std::cin >> type;
			if (type == 1)
			{
				std::cout << temp << std::endl;
			}
			if (type == 2)
			{
				int l, b, h;
				std::cin >> l >> b >> h;
				Box NewBox(l, b, h);
				temp = NewBox;
				std::cout << temp << std::endl;
			}
			if (type == 3)
			{
				int l, b, h;
				std::cin >> l >> b >> h;
				Box NewBox(l, b, h);
				if (NewBox<temp)
				{
					std::cout << "Lesser\n";
				}
				else
				{
					std::cout << "Greater\n";
				}
			}
			if (type == 4)
			{
				std::cout << temp.CalculateVolume() << std::endl;
			}
			if (type == 5)
			{
				Box NewBox(temp);
				std::cout << NewBox << std::endl;
			}

		}
	}
}