#pragma once
#include <cstdio>

void update(int *a, int *b) {
	int tmp = *a + *b;
	int tmp_ = *a - *b > 0 ? *a - *b : -(*a - *b);
	*a = tmp;
	*b = tmp_;
}

void pointer()
{
	int a, b;
	int *pa = &a, *pb = &b;

	std::cin >> a >> b;
	update(pa, pb);
	printf("%d\n%d", a, b);
}
