#include <stdio.h>

void print(char str[])
{
    printf("%s \n", str);
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(void)
{
    // Task 1

    print("Hello GitHub!");
    print("Hi work!");
    print("HEMI 6.4 the best!");

    // Task 2
    
    int x = 16;
    int y = 27;
    printf("x is %d \ny is %d \n", x, y);
    swap(&x, &y);
    printf("x is %d \ny is %d \n", x, y);
    return 0;
}