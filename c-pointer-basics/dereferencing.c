#include <stdio.h>

int main(void)
{
	int a = 10;
	int *p = &a;

	printf("Value of a: %d\n", a);
	printf("Address stored in p: %p\n", (void *) p);	
	printf("Value using dereference: %d\n", *p);

	return 0;
}
