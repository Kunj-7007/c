#include <stdio.h>
void main()
{

    /*
        int a = 50;
        if (a <= 50)
        {
            printf("%d is smaller than 50", a);
        }
        else
        {
            printf("A is = 50");
        }*/
    // Find the number whether the number is odd or even
    /*int a;
    printf("Enter the value :");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("\nthe value is even !");
    }
    else
    {
        printf("\nThe value is odd!");
    }*/
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