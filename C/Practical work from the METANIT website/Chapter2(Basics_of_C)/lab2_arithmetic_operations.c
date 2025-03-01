#include <stdio.h>

int main (void)
{
    // Taks 1

    int num1;
    printf("Input num1: \n");
    scanf("%d", &num1);
    int num2;
    printf("Input num2: \n");
    scanf("%d", &num2);
    int num3 = num1 + num2;
    printf("num1 + num2 is %d \n", num3);

    // Task 2 & 3

    int a = 10;
    float b = 4;
    float c = a / b;
    printf("a / b is %f \n", c);

    // Task 4

    int x = 10;
    int y = 5;
    int sum = x + y;
    float sa = sum / 2.0;
    printf("Sum is %d \n", sum);
    printf("Sa is %f \n", sa); 

    // Task 5

    int number1 = 30;
    int number2 = 4;
    int number3 = number1 % number2;
    printf("Result is %d\n", number3);

    // Task 6

    float one = 10;
    float two = 3;
    float three = one / two;
    printf("Result is %.3f\n", three);

    return 0;
}