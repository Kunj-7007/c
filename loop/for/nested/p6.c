#include <stdio.h>
void main()
{
    int i, j, numberofrows = 4, k;
    for (i = 0; i <= numberofrows; i++)
    {
        for (k = 0; k <= numberofrows - i; k++)
        {
            printf("   ");
        }

        for (j = 0; j <= i; j++)
        {
            printf("%c  ", 65 + j);
        }
        printf("\n");
    }
}