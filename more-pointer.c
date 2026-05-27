#include <stdio.h>

/** this is pointer modification in the following code you'll see how we change and modify the pointer
 *
 * you don't to see it now but in memory first a was 1 then when we update it by adding 4 the new updated value is 5
 */

int main(void)
{
	int a = 1;
	int *p = &a;

	*p = *p + 4;

	printf("The value of a is: %d\n", a);
	printf("The value of the updated p is: %d\n", *p);
}

