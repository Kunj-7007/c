#include <stdio.h>
void main()
{
    int a;
    int b;
    char c;
    printf("Enter the operator: ");
    scanf("%c", &c);
    printf("Enter the value of a:");
    scanf("%d", &a);
    printf("Enter the value of:");
    scanf("%d", &b);
    if (c == '+')
    {
        printf("The value is %d", a + b);
    }
    else if (c == '-')
    {
        printf("The value is %d ", a - b);
    }
    else if (c == '*')
    {
        printf("The value is %d", a * b);
    }
    else if (c == '/')
    {
        printf("The value is %d", a / b);
    }

    else
    {
        printf("The operator used is incorrect");
    }
}