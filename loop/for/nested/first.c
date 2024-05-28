#include <stdio.h>
void main()
{
    int i = 0, j = 0;
    int numberOfRows = 4;
    for (i = 0; i < numberOfRows; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}