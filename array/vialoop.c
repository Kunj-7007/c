#include <stdio.h>
void main()
{
    int i = 0, userInput;
    int marks[5];
    for (i = 0; i < 5; i++)
    {
        printf("\nEnter the value f %d student", i);
        scanf("%d", &marks[i]);
    }
    printf("\nEnter the student id: ");
    scanf("%d", &userInput);
    printf("\n%d", marks[userInput]);
    // for (i = 0; i < 5; i++)
    // {
    //     printf("\nMarks of %d student is %d", i, marks[i]);
    // }
}