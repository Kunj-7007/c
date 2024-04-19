// find number of digit in ngive number
#include <stdio.h>
void main()
{
    int i = 0;
    int x = 6239;
    while (x != 0)
    {
        x = x / 10;
        i++;
    }
    printf("%d", i);
}