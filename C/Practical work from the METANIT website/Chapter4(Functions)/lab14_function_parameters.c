#include <stdio.h>

void Increase(int x)
{
    x += 5;
    printf("x is %d \n", x);
}

void Inc(const int n)
{
    printf("n is %d \n", n*2);
}

int main(void)
{
    // Task 1

    int x = 25;
    Increase(x);

    // Task 2

    int n = 30;
    Inc(n);
    return 0;
}