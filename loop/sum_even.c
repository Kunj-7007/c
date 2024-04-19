// sum of even number
#include <stdio.h>
void main()
{
    int i = 2;
    int x = 0;
    while (i <= 50)
    {
        x += i;
        i += 2;
    }
    printf("%d", x);
}