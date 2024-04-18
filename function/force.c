#include <stdio.h>
int force(int a, int b)
{
    int c;
    c = a * b;
    return c;
}
void main()
{
    int x, y;
    printf("Enter the value of mass: ");
    scanf("%d", &x);
    printf("Enter the value of acceleration :");
    scanf("%d", &y);
    printf("The value of force:%d", force(x, y));
}