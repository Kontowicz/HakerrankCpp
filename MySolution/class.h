#pragma once
#include <string>

class Student
{
private:
	int age;
	std::string first_name;
	std::string last_name;
	int standard;
public:
	void set_age(int age)
	{
		this->age = age;
	}
	void set_standard(int s)
	{
		this->standard = s;
	}

	void set_first_name(std::string s)
	{
		this->first_name = s;
	}

	void set_last_name(std::string s)
	{
		this->last_name = s;
	}

	int get_age()
	{
		return this->age;
	}

	std::string get_last_name()
	{
		return  this->last_name;
	}

	std::string get_first_name()
	{
		return  this->first_name;
	}

	int get_standard()
	{
		return this->standard;
	}

	std::string to_string()
	{
		return std::to_string(this->age) + ',' + this->first_name + ',' + this->last_name + ',' + std::to_string(this->standard);
	}
};

void class_()
{


}
