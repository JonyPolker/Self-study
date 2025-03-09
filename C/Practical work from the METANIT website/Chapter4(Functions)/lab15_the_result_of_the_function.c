#include <stdio.h>

int calculate(int, int);

int factorial(int x)
{
    int res = 1;
    for(int i = 1; i <= x; i++)
    {
        res *= i;
    }
    return res;
}

int main(void)
{
    // Tasl 1 & 2

    printf("Result is %d \n", calculate(16, 27));
    printf("Result is %d \n", calculate(24, 11));
    printf("Result is %d \n", calculate(15, 15));

    // Task 3

    printf("5! is %d \n", factorial(5));
    printf("10! is %d \n", factorial(10));
    printf("7! is %d \n", factorial(7));

    return 0;
}

int calculate(int x, int y)
{
    if (x > y)
    {
        return x - y;
    }
    else if (x < y)
    {
        return x + y;
    }
    else 
    {
        return 0;
    }
}