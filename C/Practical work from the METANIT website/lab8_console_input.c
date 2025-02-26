#include <stdio.h>

int main(void)
{
    // Task 1

    int a, b;
    double c;
    printf("Enter the variables separated by a space: ");
    scanf("%d %d %lf", &a, &b, &c);

    printf(" int a is %d \n int b is %d \n double c is %.2lf \n", a, b, c);

    // Task 2



    // Task 3

    /*int age;
    char name[20];
    // вводим возраст
    printf("Your age: ");
    scanf("%d", &age);
    // вводим имя
    printf("Your name: ");
    scanf("%s20", name);

    printf("Name: %s \t Age = %d\n ", name, age);*/

    // Task 4

    float x, y;
    printf("Input length and width: \n");
    scanf("%f %f", &x, &y);
    float sqr = x * y;
    printf("Square is %.2f \n", sqr);

    // Taks 5

    float meters;
    float foot;
    printf("Input foot: ");
    scanf("%f", &foot);
    meters = foot / 3.281;
    printf("Meters is %.3f", meters);
    return 0;
}