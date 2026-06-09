#include <stdio.h>

void test(int n)
{
	if (n == 0) // this is the base case
	return;

	printf("%d\n", n);

	test(n - 1);
}

int main(void){
	test(8);
	return(0);
}
