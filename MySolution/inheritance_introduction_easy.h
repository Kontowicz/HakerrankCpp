#pragma once
#include <iostream>

namespace _23
{
	class Triangle_ {
	public:
		void triangle() {
			std::cout << "I am a triangle\n";
		}
	};

	class Isosceles : public Triangle_ {
	public:
		void isosceles() {
			std::cout << "I am an isosceles triangle\n";
		}
		void description() { std::cout << "In an isosceles triangle two sides are equal\n"; }

		void triangle() { std::cout << "I am a triangle\n"; }
	};


	void inheritance_introduction()
	{
		Isosceles isc;
		isc.isosceles();
		isc.description();
		isc.triangle();
	}
}