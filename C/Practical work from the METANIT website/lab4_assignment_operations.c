#include <stdio.h>

int main(void)
{
    // Task 1
    
    int x = 20;
    int y = 5;
    int z = x; // 20
    x = y;
    y = z;
    printf("Variable x is %d \n", x);
    printf("Variable y is %d \n", y);
    
    // Task 2
    
    x = 20;
    y = 5;
    x = y;
    y = x * 4;
    
    printf("Variable x is %d \n", x);
    printf("Variable y is %d \n", y);
    
    // Task 3

    x = 20;     // 10100
    y = 5;      // 00101

    y ^= x;     // 10001
    x ^= y;     // 00101
    y ^= x;     // 10100

    printf("Variable x is %d \n", x);
    printf("Variable y is %d \n", y);
    
    // Task 4

    x = 20;
    y = 5;

    y = (x + y) - (x = y); 

    printf("Variable x is %d \n", x);
    printf("Variable y is %d \n", y);
    return 0;
}