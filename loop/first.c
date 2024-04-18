#include <stdio.h>
void main()
{
    int i = 1;
    int fact = 1;
    while (i <= 5)
    {
        fact *= i;
        i++;
    }
    printf("%d", fact);
}