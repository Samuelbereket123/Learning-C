#include <stdio.h>

void test(int n)
{
	if (n == 0)
	return;

	test(n - 1);

	printf("%d\n", n);
}

int main(void)
{
	test(4);

	return 0;
}
