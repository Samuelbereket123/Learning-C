#include <stdio.h>

int add(int a, int b) {
	return a + b;
}

int main(void) {
	int result;

	result = add(3, 2);

	printf("%d\n", result);

	return 0;
}
