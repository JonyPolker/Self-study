#include <stdio.h>

int main(void)
{
    // Task 1

    char str[] = {"Random tetx"};
    printf("Text is \"%s\" \n", str);

    // Task 2

    int arr[4] = {1, 2, 3, 4};
    arr[0] *= 2;
    arr[3] *= 2;

    for (int i = 0; i < 4; i++)
    {
        printf("Number %d is %d \n", i+1, arr[i]);
    }

    // Task 3

    int arr1[4] = {1, 2, 3, 4};
    for (int i = 0; i < 4; i++)
    {
        arr1[i] *= 2;
        printf("Number %d is %d \n", i+1, arr1[i]);
    }
    return 0;
}