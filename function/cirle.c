#include <stdio.h>
float area(int r)
{
    float A;
    A = r * r * 3.14;
    return A;
}
void main()
{
    int x;
    printf("Enter the value of radius :");
    scanf("%d", &x);
    printf(" \nThe area of ciclre is %f", area(x));
}