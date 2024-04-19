#include <stdio.h>
void main()
{
    int i = 123;
    int x = 0, c, y;
    while (i != 0)
    {
        c = i % 10;
        x = x * 10;
        x = x + c;
        i = i / 10;
    }
    printf("%d", x);
}
