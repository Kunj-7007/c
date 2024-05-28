#include <stdio.h>
void main()
{
    int i = 0, j = 0, numberofrows = 4, k;
    for (i = 0; i <= numberofrows; i++)
    {
        for (j = 0; j <= numberofrows - i; j++)
        {
            printf("   ");
        }
        for (k = 0; k <= i; k++)
        {
            printf("*     ");
        }
        printf("\n");
    }
    numberofrows = 4;
    for (i = 0; i <= numberofrows; i++)
    {
        for (k = 0; k <= i + 1; k++)
        {
            printf("   ");
        }
        for (j = 0; j < numberofrows - i; j++)
        {
            printf("*     ");
        }
        printf("\n");
    }
}