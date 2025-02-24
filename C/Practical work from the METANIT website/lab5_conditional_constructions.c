#include <stdio.h>

int main(void)
{
    // Task 1

    int a = 5;
    int b = 7;

    if (a == b)
    {
        printf("Equal \n");
    }
    else 
    {
        printf("Not Equal \n");
    }

    // Task 2

    int c;
    printf("Input number: ");
    scanf("%d", &c);

    if (14 > c && c > 4)
    {
        printf("within range (4..14) \n");
    }
    else
    {
        printf("out of range \n");
    }

    // Task 3

    int f;
    printf("Input number: ");
    scanf("%d", &f);

    if (14 >= f && f >= 4)
    {
        printf("within range [4..14] \n");
    }
    else
    {
        printf("out of range \n");
    }

    // Task 4

    int i = 5;

    switch (i)
    {
    case 4:
        printf("Your number is 4 \n");
        break;
    case 5:
        printf("Your number is 5 \n");
        break;
    case 6:
        printf("Your number is 6 \n");
        break;
    }

    // Task 5

    int x = 10, y = 20, z = 30;
    int max = x;
    if (y > x & y > z)
    {
        max = y;
    }
    else if(z > x & z > y)
    {
        max = z;
    }

    printf("Max number is %d \n", max);

    return 0;
}