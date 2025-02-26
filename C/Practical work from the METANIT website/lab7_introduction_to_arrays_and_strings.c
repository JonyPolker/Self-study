#include <stdio.h>

int main(void)
{
    // Task 1

    char str[] = {"Random tetx"};
    printf("Text is \"%s\" \n", str);
    
    printf("\n");
    // Task 2

    int arr[4] = {1, 2, 3, 4};
    arr[0] *= 2;
    arr[3] *= 2;

    for (int i = 0; i < 4; i++)
    {
        printf("Number %d is %d \n", i+1, arr[i]);
    }
    
    printf("\n");
    // Task 3

    int arr1[4] = {1, 2, 3, 4};
    for (int i = 0; i < 4; i++)
    {
        arr1[i] *= 2;
        printf("Number %d is %d \n", i+1, arr1[i]);
    }
    
    printf("\n");
    // Task 4
    
    int arr2[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr2) / sizeof(arr2[0]);
    int c = size / 2;
    for (int i = 0; i < c; i++)
    {
        int cache = arr2[i];
        arr2[i] = arr2[size-i-1];
        arr2[size-i-1] = cache;
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d", arr2[i]);
    }
    return 0;
}