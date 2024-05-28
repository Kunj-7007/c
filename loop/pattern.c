#include <stdio.h>
void main()
{
    int i = 0, j = 0;
    while (i <= 4)
    {
        j = 0;
        while (j <= i)
        {
            printf("*  ");
            j++;
        }
        printf("\n");
        i++;
    }
}