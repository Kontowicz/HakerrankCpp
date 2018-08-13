#pragma once
#include <ostream>
#include <iostream>
#include <string>
template <class T>
class AddElements {
public:
	T elem;

	AddElements(T e)
	{
		elem = e;
	}

	T add(T&a) {
		return elem + a;
	}

	T concatenate(T a) {
		return a + elem;
	}
};

void class_templates()
{
	int n, i;
	std::cin >> n;
	for (i = 0; i<n; i++) {
		std::string type;
		std::cin >> type;
		if (type == "float") {
			double element1, element2;
			std::cin >> element1 >> element2;
			AddElements<double> myfloat(element1);
			std::cout << myfloat.add(element2) << std::endl;
		}
		else if (type == "int") {
			int element1, element2;
			std::cin >> element1 >> element2;
			AddElements<int> myint(element1);
			std::cout << myint.add(element2) << std::endl;
		}
		else if (type == "string") {
			std::string element1, element2;
			std::cin >> element1 >> element2;
			AddElements<std::string> mystring(element1);
			std::cout << mystring.concatenate(element2) << std::endl;
		}
	}
}