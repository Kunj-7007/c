// sum of frist even number from 1 to 20
#include <stdio.h>
void main()
{
    int i = 0, c = 0;
    while (i <= 40)
    {
        c = c + i;
        i += 2;
    }
    printf("%d", c);
}