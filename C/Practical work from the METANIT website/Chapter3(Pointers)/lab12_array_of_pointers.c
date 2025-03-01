#include <stdio.h>

int main (void)
{
    // Task 1

    char *str[] = {"Tom", "Bob", "Sam"};
    //char *pa[] = {&str[0], &str[1], &str[2]};
    for (int i = 0; i < 3; i++)
    {
        printf("String ps \"%s\" \n", str[i]);
    }
    return 0;
}