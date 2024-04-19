// sum of all odd number
#include <stdio.h>
void main()
{
    int i = 1;
    int x = 0;
    while (i <= 50)
    {
        x += i;
        i += 2;
    }
    printf("%d", x);
}