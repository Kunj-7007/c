#include <stdio.h>
void main()
{
    int i;
    int value = 0;
    for (i = 2; i <= 100; i += 2)
    {
        value = value + i;
    }
    printf("%d", value);
}