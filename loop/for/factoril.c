#include <stdio.h>
void main()
{
    int i;
    int value = 1;
    for (i = 5; i > 0; i--)
    {
        value = value * i;
    }
    printf("%d", value);
}