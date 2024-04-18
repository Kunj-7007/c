#include <stdio.h>
float force_of_attraction(int q1, int q2, int r)
{
    float a = q1 * q2;
    float b = r * r;
    float c = 6.9 * (a / b);
    return c;
}
void main()
{
    int x, y, z;
    printf("Enter the value of charge 1 :");
    scanf("%d", &x);
    printf("Enter the value of charge 2 ");
    scanf("%d", &y);
    printf("Enter the value of distnce between the charges : ");
    scanf("%d", &z);
    printf("%f", force_of_attraction(x, y, z));
}