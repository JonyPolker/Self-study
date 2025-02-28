#include <stdio.h>

int main (void)
{
    // Task 1
    int x = 10;
    int *px = &x;

    printf("Adress x is %p \n", px);
    printf("x is %d \n", *px);

    // Task 2

    int a = 15;
    int *ap = &a;
    *ap = 25;
    printf("a is %d", *ap);
    return 0;
}