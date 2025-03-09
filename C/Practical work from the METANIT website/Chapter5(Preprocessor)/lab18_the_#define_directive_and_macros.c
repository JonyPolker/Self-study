#include <stdio.h>
#define N 22
#define Max(a, b) a > b ? a : b

int main(void)
{
    // Task 1

    int x = N;
    printf("%d \n", x);
    #undef N
    // Task 2

    int y = 39;
    printf("Max is %d \n", Max(x, y));
    
    return 0;
}