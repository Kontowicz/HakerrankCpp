#pragma once
#include <ostream>
#include <iostream>

namespace _30
{
	class Person_ {
	public:
		Person_(const std::string& first_name, const std::string& last_name) : first_name_(first_name), last_name_(last_name) {}
		const std::string& get_first_name() const {
			return first_name_;
		}
		const std::string& get_last_name() const {
			return last_name_;
		}
	private:
		std::string first_name_;
		std::string last_name_;
	};

	std::ostream& operator <<(std::ostream&out, const Person_&tmp) {
		out << "first_name=" + tmp.get_first_name() + ",last_name=" + tmp.get_last_name();
		return out;
	}

	void overloading_ostream_operator()
	{
		std::string first_name, last_name, event;
		std::cin >> first_name >> last_name >> event;
		auto p = Person_(first_name, last_name);
		std::cout << p << " " << event << std::endl;
	}
}
