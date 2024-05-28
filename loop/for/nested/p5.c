#include <stdio.h>
void main()
{
    int i = 0, j = 0, k = 0;
    int numberOfRows = 4;
    for (i = 0; i < numberOfRows; i++)
    {
        for (k = 0; k <= numberOfRows - i; k++)
        {
            printf(" ");
        }
        for (j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}