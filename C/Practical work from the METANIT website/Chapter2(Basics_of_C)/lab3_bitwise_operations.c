#include <stdio.h>

int main (void)
{
    int number = 0b01101;
    int bit1 = 1;
    int bit2 = 2;
    int result1 = (1 << bit1); // 00010
    int result2 = ~(1 << bit2); // 00100
    unsigned char result = (number | result1) & result2; // 01011
    printf("Result: %d", result);

    return 0;   // 01011
}