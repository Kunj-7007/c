#include <stdio.h>
void main()
{
    int a;
    int b;
    int c;

    printf("Enter the operator: ");
    printf("\n1 for Addition");
    printf("\n2 for Subtraction");
    printf("\nEnter the character");
    scanf("%d", &c);

    printf("Enter the value of a:");
    scanf("%d", &a);
    printf("Enter the value of:");
    scanf("%d", &b);

    switch (c)
    {
    case 1:
        printf("a+b = %d", a + b);
        break;
    case 2:
        printf("a+b = %d", a - b);
        break;
    default:
        printf("Invalid");
    }
}