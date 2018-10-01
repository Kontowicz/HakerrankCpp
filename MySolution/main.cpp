#include "include_easy.h"
#include "include_medium.h"
#include "include_hard.h"
#include <iostream>

void print()
{
	std::cout << 1 << "arrays_introduction" << std::endl;
	std::cout << 2 << "box_it" << std::endl;
	std::cout << 3 << "classes_objects" << std::endl;
	std::cout << 4 << "cpp_input_and_output" << std::endl;
	std::cout << 5 << "cpp_lower_bound" << std::endl;
	std::cout << 6 << "cpp_maps" << std::endl;
	std::cout << 7 << "cpp_sets" << std::endl;
	std::cout << 8 << "c_class_templates" << std::endl;
	std::cout << 9 << "c_tutorial_basic_data_types" << std::endl;
	std::cout << 10 << "c_tutorial_class" << std::endl;
	std::cout << 11 << "c_tutorial_conditional_if_else" << std::endl;
	std::cout << 12 << "c_tutorial_for_loop" << std::endl;
	std::cout << 13 << "c_tutorial_functions" << std::endl;
	std::cout << 14 << "c_tutorial_pointer" << std::endl;
	std::cout << 15 << "c_tutorial_stringstream" << std::endl;
	std::cout << 16 << "c_tutorial_strings" << std::endl;
	std::cout << 17 << "c_tutorial_struct" << std::endl;
	std::cout << 18 << "inheritance_introduction" << std::endl;
	std::cout << 19 << "multi_level_inheritance_cpp" << std::endl;
	std::cout << 20 << "overload_operators" << std::endl;
	std::cout << 21 << "preprocessor_solution" << std::endl;
	std::cout << 22 << "prettyprint" << std::endl;
	std::cout << 23 << "rectange_area" << std::endl;
	std::cout << 24 << "variable_sized_arrays" << std::endl;
	std::cout << 25 << "vector_erase" << std::endl;
	std::cout << 26 << "vector_sort" << std::endl;
	std::cout << 27 << "accessing_inherited_functions" << std::endl;
	std::cout << 28 << "cpp_class_template_specialization" << std::endl;
	std::cout << 29 << "cpp_exception_handling" << std::endl;
	std::cout << 30 << "deque_stl" << std::endl;
	std::cout << 31 << "exceptional_server" << std::endl;
	std::cout << 32 << "hotel_prices" << std::endl;
	std::cout << 33 << "inherited_code" << std::endl;
	std::cout << 34 << "messages_order" << std::endl;
	std::cout << 35 << "operator_overloading" << std::endl;
	std::cout << 36 << "overloading_ostream_operator" << std::endl;
	std::cout << 37 << "virtual_functions" << std::endl;
	std::cout << 38 << "bitset_1" << std::endl;
	std::cout << 39 << "magic_spells" << std::endl;
}



int main()
{
	int n(0);
	do
	{
		print();
		std::cin >> n;
		std::cin.clear();
		std::cin.ignore();
		switch (n)
		{
			case 1: _2::arrays_introduction(); break;
			case 2: _4::box_it(); break;
			case 3: _15::classes_objects(); break;
			case 4: _17::cpp_input_and_output(); break;
			case 5: _18::cpp_lower_bound(); break;
			case 6: _19::cpp_maps(); break;
			case 7: _20::cpp_sets(); break;
			case 8: _5::c_class_templates(); break;
			case 9: _6::c_tutorial_basic_data_types(); break;
			case 10: _7::c_tutorial_class(); break;
			case 11: _8::c_tutorial_conditional_if_else(); break;
			case 12: _9::c_tutorial_for_loop(); break;
			case 13: _10::c_tutorial_functions(); break;
			case 14: _11::c_tutorial_pointer(); break;
			case 15: _13::c_tutorial_stringstream(); break;
			case 16: _12::c_tutorial_strings(); break;
			case 17: _14::c_tutorial_struct(); break;
			case 18: _23::inheritance_introduction(); break;
			case 19: _27::multi_level_inheritance_cpp(); break;
			case 20: _29::overload_operators(); break;
			case 21: _38::preprocessor_solution(); break;
			case 22: _31::prettyprint(); break;
			case 23: _32::rectange_area(); break;
			case 24: _32::variable_sized_arrays(); break;
			case 25: _33::vector_erase(); break;
			case 26: _34::vector_sort(); break;
			case 27: _1::accessing_inherited_functions(); break;
			case 28: _15::cpp_class_template_specialization(); break;
			case 29: _16::cpp_exception_handling(); break;
			case 30: _39::deque_stl(); break;
			case 31: _21::exceptional_server(); break;
			case 32: _22::hotel_prices(); break;
			case 33: _24::inherited_code(); break;
			case 34: _26::messages_order(); break;
			case 35: _28::operator_overloading(); break;
			case 36: _30::overloading_ostream_operator(); break;
			case 37: _35::virtual_functions(); break;
			case 38: _3::bitset_1(); break;
			case 39: _25::magic_spells(); break;
			case 0: break;
		}
	} while (n > 0);
	return 0;
}