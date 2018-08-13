#pragma once
#include <iostream>

class Rectangle1
{
public:
	void display() {
		std::cout << a << " " << b << "\n";
	}


	int a;
	int b;
};

class RectangleArea : public Rectangle1 {
public:
	void read_input() {
		std::cin >> a;
		std::cin >> b;
	}

	void display() {
		std::cout << a * b;
	}
};


void rectange_area()
{
	RectangleArea r_area;
	r_area.read_input();
	r_area.Rectangle1::display();
	r_area.display();
}