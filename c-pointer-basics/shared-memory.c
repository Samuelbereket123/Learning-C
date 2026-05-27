#include <stdio.h>

int main(void)
{
	int a = 5;

	int *p1 = &a;
	int *p2 = &a;

	*p1 = 20;

	printf("a = %d\n", *p1);
	printf("*p1 = %d\n", *p1);
	printf("*p2 = %d\n", *p2);
	
	return 0;

}
