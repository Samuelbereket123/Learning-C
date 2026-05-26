#include <stdio.h>

int main(void)
{
	int a = 10;
	int *str = &a;

	printf("%d\n", a);
	printf("%p\n", str);
	printf("%d\n", *str);
}
