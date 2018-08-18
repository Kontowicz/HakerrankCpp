#include "include_easy.h"
#include "include_medium.h"

void print()
{
	std::cout << "-----EASY-----\n";
	std::cout << 1 << ": Arrays Introduction\n";
	std::cout << 2 << ": Conditional Statements\n";
	std::cout << 3 << ": Functions\n";
	std::cout << 4 << ": For Loop\n";
	std::cout << 5 << ": Input and Output\n";
	std::cout << 6 << ": Pointer\n";
	std::cout << 7 << ": Basic Data types\n";
	std::cout << 8 << ": Variable Sized Arrays\n";
	std::cout << 9 << ": String Stream\n";
	std::cout << 10 << ": Strings\n";
	std::cout << 11 << ": Structs\n";
	std::cout << 12 << ": Class\n";
	std::cout << 13 << ": Classes and Objects\n";
	std::cout << 14 << ": Box it\n";
	std::cout << 15 << ": Vecotr sort\n";
	std::cout << 16 << ": Vecotr erase\n";
	std::cout << 17 << ": Lowet Bound STL\n";
	std::cout << 18 << ": Sets STL\n";
	std::cout << 19 << ": Maps STL\n";
	std::cout << 20 << ": Print Pretty\n";
	std::cout << 21 << ": Inheritance Introduction\n";
	std::cout << 22 << ": Rectangle Area\n";
	std::cout << 23 << ": Overload Operators\n";
	std::cout << 24 << ": Multi Level Inheritance\n";
	std::cout << 25 << ": Class Templates\n";
	std::cout << "-----MEDIUM-----\n";
	std::cout << 26 << ": Inherited Code\n";
	std::cout << 27 << ": Overloading Ostream Operator\n";
	std::cout << 28 << ": Operator Overloading\n";
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
#pragma region EASY
		case 1: arrays(); break;
		case 2: conditional(); break;
		case 3: functions(); break;
		case 4: loop(); break;
		case 5: output(); break;
		case 6: pointer(); break;
		case 7: types(); break;
		case 8: sized_arrays(); break;
		case 9: string_stream(); break;
		case 10: strings(); break;
		case 11: structs(); break;
		case 12: class_(); break;
		case 13: classes(); break;
		case 14: check2(); break;
		case 15: vecotor_sort(); break;
		case 16: vector_erase(); break;
		case 17: lower_bound(); break;
		case 18: sets_STL(); break;
		case 19: maps(); break;
		case 20: print_pretty(); break;
		case 21: inheritance_intro(); break;
		case 22: rectange_area(); break;
		case 23: overload_operators(); break;
		case 24: multi_level_inheritance(); break;
		case 25: class_templates(); break;
#pragma endregion 

#pragma region MEDIUM
		case 26: code(); break;
		case 27: overloading_ostream_operator_medium(); break;
		case 28: operator_overloading_medium(); break;
#pragma endregion 
		case 0: break;
		}
	} while (n > 0);
	return 0;
}
