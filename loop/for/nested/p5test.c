#include <stdio.h>
void main()
{
    int i = 0, j = 0, numberofrows = 4, k = 0;
    for (i = 0; i <= numberofrows; i++)
    {
        for (k = 0; k <= numberofrows - i; k++)
        {
            printf("   ");
        }
        for (j = 0; j <= i; j++)
        {
            printf("%c     ", 65 + i);
        }
        printf("\n");
    }
}