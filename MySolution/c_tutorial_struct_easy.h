#pragma once
#include <string>
#include <iostream>

namespace _14
{
	struct Studenta
	{
		int age;
		std::string first_name;
		std::string last_name;
		int standard;
	};

	void c_tutorial_struct()
	{
		Studenta st;

		std::cin >> st.age >> st.first_name >> st.last_name >> st.standard;
		std::cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;
	}
}