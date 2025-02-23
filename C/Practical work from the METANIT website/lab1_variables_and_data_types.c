#include <stdio.h>

int main (void)
{
    // Task 1

    printf("Hello World!\n");
    printf("Hello C\n");

    // Task 2

    char name;
    int number;
    float pi;
    double pi1;

    // Task 3

    name = 'F';
    number = 10;
    pi = 3.14f;
    pi1 = 3.14159;

    // Task 4

    printf(" Name is %c \n Number is %d \n Number pi is %.2f \n Number pi1 is %0.5f", name, number, pi, pi1); 
    // or
    printf("Name is %c \n", name);
    printf("Number is %d \n", number);
    printf("Number pi is %.2f \n", pi);
    printf("Number pi1 is %.5f \n", pi1);

    return 0;
}