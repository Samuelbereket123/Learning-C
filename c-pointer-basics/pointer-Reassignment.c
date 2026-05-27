#include <stdio.h>

int main() 
{
	int a = 3;
	int b = 8;

	int *p = &a;

	printf("Iintially: %d\n", *p);

	p = &b;

	printf("After resassingment: %d\n", *p);

	return 0;
}
