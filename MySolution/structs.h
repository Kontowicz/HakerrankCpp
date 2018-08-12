#pragma once
#include <string>
#include <iostream>

struct Studenta
{
	int age;
	std::string first_name;
	std::string last_name;
	int standard;
};

void structs()
{
	Studenta st;

	std::cin >> st.age >> st.first_name >> st.last_name >> st.standard;
	std::cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;
}
