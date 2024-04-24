#include <stdio.h>
float simple_interest(int x, int y)
{
    float z = (x * y * 9.5) / 100;
    return z;
}
void main()
{
    int p, n;
    printf("Enter the value of principle value : ");
    scanf("%d", &p);
    printf("\nSimple interest rate:9.5 ");
    printf("\nInterest for number of yrars:");
    scanf("%d", &n);
    printf("The simple interest :%f", simple_interest(p, n));
}
