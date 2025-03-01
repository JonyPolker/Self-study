#include <stdio.h>

int main (void)
{
    // Task 1

    const long x = 10;
    const long *px = &x;

    char *const str = "Hello";

    printf("x is %ld \n", *px);
    printf("String is \"%s\"", str);
    return 0;
}