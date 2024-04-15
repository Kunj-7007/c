#include <stdio.h>
int odd_even(int a)
{
    if (a % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void main()
{
    int x;
    printf("Enter the value:");
    scanf("%d", &x);
    if (odd_even(x) == 1)
    {
        printf("The value is even !");
    }
    else
    {
        printf("The value is odd!");
    }
}