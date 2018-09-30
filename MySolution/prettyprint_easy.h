#pragma once
#include <ios>
#include <iostream>
#include <iomanip>

namespace _31
{
	void prettyprint()
	{
		int T;
		std::cin >> T;
		std::cout << setiosflags(std::ios::uppercase);
		std::cout << std::setw(0xf) << std::internal;
		while (T--) {
			double A;
			std::cin >> A;
			double B;
			std::cin >> B;
			double C;
			std::cin >> C;
			std::cout << std::hex << std::left << std::showbase << std::nouppercase;
			std::cout << static_cast<long long>(A) << "\n";

			std::cout << std::dec << std::right << std::setw(15) << std::setfill('_') << std::showpos << std::fixed << std::setprecision(2);
			std::cout << B << "\n";

			std::cout << std::scientific << std::uppercase << std::noshowpos << std::setprecision(9);
			std::cout << C << "\n";

		}
	}
}