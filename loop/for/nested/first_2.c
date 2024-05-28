#include <stdio.h>
void main()
{
    int i, j, number = 6;
    for (i = 0; i < number; i++)
    {
        for (j = 0; j < number - i; j++)
        {
            printf("*  ");
        }
        printf("\n");
    }
}