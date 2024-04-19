// finding sum of all natural
#include <stdio.h>
void main()
{
    int i = 1;
    int x = 0;
    while (i <= 50)
    {
        x = x + i;
        i++;
    }
    printf("%d", x);
}