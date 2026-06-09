#include <stdio.h>

int main(void)
{
	void countdown(int n)
	{
		// the if statement is the base case - it's going to stop us from looping infintly
		if (n == 0)
		return;

		printf("%d\n", n);

		countdown(n - 1); // this calls the function to go over and over as it's creating new function as it loops over and over again and it's called recursive case.
	}

	countdown(5);
}
