#include "arrays_easy.h"
#include "conditional_easy.h"
#include "functions_easy.h"
#include "loop_easy.h"
#include "output_easy.h"
#include "pointer_easy.h"
#include "types_easy.h"
#include "sized_array_easy.h"
#include "string_stream_easy.h"
#include "strings.h"
#include "structs.h"
#include "class.h"
void print()
{
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
}

int main()
{
	int n(0);
	do
	{
		print();
		std::cin >> n;
		switch (n)
		{
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
		case 0: break;
		}
	} while (n > 0);
	return 0;
}
