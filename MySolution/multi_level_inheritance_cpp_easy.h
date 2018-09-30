#pragma once
#include <iostream>

namespace _27
{
	class Triangle2 {
	public:
		void triangle() {
			std::cout << "I am a triangle\n";
		}
	};

	class Isosceles2 : public Triangle2 {
	public:
		void isosceles() {
			std::cout << "I am an isosceles triangle\n";
		}
	};

	class Equilateral2 : public Isosceles2 {
	public:
		void equilateral() {
			std::cout << "I am an equilateral triangle\n";
		}
	};



	void multi_level_inheritance_cpp()
	{
		Equilateral2 eqr;
		eqr.equilateral();
		eqr.isosceles();
		eqr.triangle();
	}
}