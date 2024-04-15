#include <stdio.h>
int Greater_less(int a, int b)
{
    if (a > b)
    {
        return 0;
    }
    else if (a == b)
    {
        return 1;
    }
    else
        return 2;
}
void main()
{
    int x, y;
    printf("Enter the value of x : ");
    scanf("%d", &x);
    printf("Enter the value of y : ");
    scanf("%d", &y);
    if (Greater_less(x, y) == 0)
    {
        printf("The %d is greater than %d", x, y);
    }
    else if (Greater_less(x, y) == 1)
    {
        printf("The value %d=%d", x, y);
    }
    else
    {
        printf("The value %d is less than %d ", x, y);
    }
}