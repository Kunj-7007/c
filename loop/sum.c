#include <stdio.h>
void main()
{
    int i = 1;
    int fact = 0;
    while (i <= 50)
    {
        fact += i;

        i = i + 2;
    }
    printf("%d", fact);
}