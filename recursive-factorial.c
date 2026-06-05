#include <stdio.h>
/* this is the prototype just to tell the later function */
long factorial(int num);

int main(void)
{
	int number;
	long result;

	printf("Enter a positive integer: ");
	scanf("%d", &number);

	if (number < 0)
	{
		printf("factorial is not defined");
	} else 
	{
		result = factorial(number);
		printf("factorial of %d = %ld\n", number, result);
	}

	return 0;
}

long factorial(int num)
{
	if (num == 0 || num == 1)
	{
		return 1;
	}

	return num * factorial(num - 1);
}
