#include <stdio.h>

int main(void)
{
	int a = 10;
	int *p = &a;

	printf("%d\n", a);
	printf("%p\n", p);
	printf("%d\n", *p);
}
