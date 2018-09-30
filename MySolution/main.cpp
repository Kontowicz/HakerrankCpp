#include "include_easy"
#include "include_medium"
#include "include_hard"
#include <iostream>

void print()
{
	std::cout << 1 << arrays_introduction << std::endl;
	std::cout << 2 << box_it << std::endl;
	std::cout << 3 << classes_objects << std::endl;
	std::cout << 4 << cpp_input_and_output << std::endl;
	std::cout << 5 << cpp_lower_bound << std::endl;
	std::cout << 6 << cpp_maps << std::endl;
	std::cout << 7 << cpp_sets << std::endl;
	std::cout << 8 << c_class_templates << std::endl;
	std::cout << 9 << c_tutorial_basic_data_types << std::endl;
	std::cout << 10 << c_tutorial_class << std::endl;
	std::cout << 11 << c_tutorial_conditional_if_else << std::endl;
	std::cout << 12 << c_tutorial_for_loop << std::endl;
	std::cout << 13 << c_tutorial_functions << std::endl;
	std::cout << 14 << c_tutorial_pointer << std::endl;
	std::cout << 15 << c_tutorial_stringstream << std::endl;
	std::cout << 16 << c_tutorial_strings << std::endl;
	std::cout << 17 << c_tutorial_struct << std::endl;
	std::cout << 18 << inheritance_introduction << std::endl;
	std::cout << 19 << multi_level_inheritance_cpp << std::endl;
	std::cout << 20 << overload_operators << std::endl;
	std::cout << 21 << preprocessor_solution << std::endl;
	std::cout << 22 << prettyprint << std::endl;
	std::cout << 23 << rectange_area << std::endl;
	std::cout << 24 << variable_sized_arrays << std::endl;
	std::cout << 25 << vector_erase << std::endl;
	std::cout << 26 << vector_sort << std::endl;
	std::cout << 27 << accessing_inherited_functions << std::endl;
	std::cout << 28 << cpp_class_template_specialization << std::endl;
	std::cout << 29 << cpp_exception_handling << std::endl;
	std::cout << 30 << exceptional_server << std::endl;
	std::cout << 31 << hotel_prices << std::endl;
	std::cout << 32 << inherited_code << std::endl;
	std::cout << 33 << messages_order << std::endl;
	std::cout << 34 << operator_overloading << std::endl;
	std::cout << 35 << overloading_ostream_operator << std::endl;
	std::cout << 36 << virtual_functions << std::endl;
	std::cout << 37 << bitset_1_h << std::endl;
	std::cout << 38 << magic_spells_h << std::endl;
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
			case 1: _2::arrays_introduction_easy.h; break;
			case 2: _4::box_it_easy.h; break;
			case 3: _15::classes_objects_easy.h; break;
			case 4: _17::cpp_input_and_output_easy.h; break;
			case 5: _18::cpp_lower_bound_easy.h; break;
			case 6: _19::cpp_maps_easy.h; break;
			case 7: _20::cpp_sets_easy.h; break;
			case 8: _5::c_class_templates_easy.h; break;
			case 9: _6::c_tutorial_basic_data_types_easy.h; break;
			case 10: _7::c_tutorial_class_easy.h; break;
			case 11: _8::c_tutorial_conditional_if_else_easy.h; break;
			case 12: _9::c_tutorial_for_loop_easy.h; break;
			case 13: _10::c_tutorial_functions_easy.h; break;
			case 14: _11::c_tutorial_pointer_easy.h; break;
			case 15: _13::c_tutorial_stringstream_easy.h; break;
			case 16: _12::c_tutorial_strings_easy.h; break;
			case 17: _14::c_tutorial_struct_easy.h; break;
			case 18: _23::inheritance_introduction_easy.h; break;
			case 19: _27::multi_level_inheritance_cpp_easy.h; break;
			case 20: _29::overload_operators_easy.h; break;
			case 21: _38::preprocessor_solution_easy.h; break;
			case 22: _31::prettyprint_easy.h; break;
			case 23: _32::rectange_area_easy.h; break;
			case 24: _32::variable_sized_arrays_easy.h; break;
			case 25: _33::vector_erase_easy.h; break;
			case 26: _34::vector_sort_easy.h; break;
			case 27: _1::accessing_inherited_functions_medium.h; break;
			case 28: _15::cpp_class_template_specialization_medium.h; break;
			case 29: _16::cpp_exception_handling_medium.h; break;
			case 30: _21::exceptional_server_medium.h; break;
			case 31: _22::hotel_prices_medium.h; break;
			case 32: _24::inherited_code_medium.h; break;
			case 33: _26::messages_order_medium.h; break;
			case 34: _28::operator_overloading_medium.h; break;
			case 35: _30::overloading_ostream_operator_medium.h; break;
			case 36: _35::virtual_functions_medium.h; break;
			case 37: _3::bitset_1_hard.h; break;
			case 38: _25::magic_spells_hard.h; break;
			case 0: break;
		}
	} while (n > 0);
	return 0;
}