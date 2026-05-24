#include <stdio.h>

int _isupper(int c); // this is the prototype.

int main(void) {
	char c;

	c = 'A';

	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);

}

int _isupper(int c) {
	// what the fuck should I write here.
	if (c >= 'A' && c <= 'Z') {
	return (1);
	} 
	return(0);	
}
