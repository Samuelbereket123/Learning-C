#include <stdio.h>

int main(void)
{
	int a = 8;
	int *ptr = &a;

	printf("%d\n", a);
	printf("%p\n", ptr);
	printf("%d\n", *ptr);
}
