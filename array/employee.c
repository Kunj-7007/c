#include <stdio.h>
void main()
{
    int salary[5], i, input;
    for (i = 0; i < 5; i++)
    {
        printf(" \nEnter the salary %d: ", i);
        scanf("%d", &salary[i]);
    }
    printf("\n Enter the id :");
    scanf("%d", &input);
    printf("\nThe salary is : % d ", salary[input]);
}