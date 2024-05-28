#include <stdio.h>
void main()
{
    int i = 0, j = 0, numberofrow = 4, k = 0;
    for (i = 0; i <= numberofrow; i++)
    {
        for (k = 0; k <= numberofrow - i; k++)
        {
            printf("    ");
        }
        for (j = 0; j <= i; j++)
        {
            printf("*   ");
        }
        printf("\n");
    }
    i = 0, j = 0, numberofrow = 4, k = 0;
    for (i = 0; i < numberofrow; i++)
    {
        for (j = 0; j <= i + 4; j++)
        {
            printf("    ");
        }
        for (k = 0; k < numberofrow - i; k++)
        {
            printf("*   ");
        }
        printf("\n");
    }
}