#include <stdio.h>

int main(void)
{
	void countdown(int n)
	{
		// the if statement is the base case - it's going to stop us from looping infintly
		if (n == 0)
		return;

		printf("%d\n", n);

		countdown(n - 1);
	}

	countdown(5);
}
