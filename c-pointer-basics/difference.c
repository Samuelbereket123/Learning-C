#include <stdio.h>

int main() {
    int a = 7;
    int *p = &a;

    printf("p  = %p\n", (void *)p);
    printf("*p = %d\n", *p);

    return 0;
}
