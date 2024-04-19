// Write a C program to find first and last digit of a number.
#include <stdio.h>
int main()
{
    int first, last, i, n = 19876;
    last = n % 10;
    while (n > 9)
    {
        n = n / 10;
    }
    first = n;
    printf("First = %d \nLast = %d", first, last);
    return 0;
}