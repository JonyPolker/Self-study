#include <stdio.h>

int main(void)
{
    // Task 1

    int array[] = {16, 52, 48, 56};
    int *pa = array;
    for(int i = 0; i < sizeof(array) / sizeof(array[0]); ++i)
    {
        printf("Array[%d] is %d \n", i+1, *(pa+i));
    }

    // Task 2

    char str[] = {"The HEMI 6.4 the best"};
    char *ps = str;
    printf("String is \"%s\" \n", ps);

    // Task 3

    int arr[] = {3, 4, 5, 6, 7};
    int *par = arr;

    printf("arr[3] is %d \narr[4] is %d", *(par + 2), *(par + 3));

    return 0;
}