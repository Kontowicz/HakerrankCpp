#include "arrays_easy.h"
#include "conditional_easy.h"
#include "functions_easy.h"
#include "loop_easy.h"
#include "output_easy.h"
#include "pointer_easy.h"
#include "types_easy.h"

void print()
{
	std::cout << 1 << ": arrays\n";
	std::cout << 2 << ": conditional\n";
	std::cout << 3 << ": Functions\n";
	std::cout << 4 << ": loop\n";
	std::cout << 5 << ": output\n";
	std::cout << 6 << ": pointer\n";
	std::cout << 7 << ": types\n";
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
		case 0: break;
		}
	} while (n > 0);
	return 0;
}
