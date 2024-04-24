#include <stdio.h>
int Fact(int i)
{

    int value = 1;
    while (i > 0)
    {
        value = value * i;
        i--;
    }
    return value;
}
void main()
{
    int x = 5;
    printf("%d", Fact(x));
}