#include <stdio.h>

void add(int a, int b)
{
    int c = a + b;
    printf("%d", c);
    return c;
}
int check_even_odd(int l)
{
    if (l % 2 == 0)
        return 1;
    else
        return 0;
}
// void main()
// {
//     int x, y;
//     printf("Enter value of X : ");
//     scanf("%d", &x);
//     printf("Enter value of Y : ");
//     scanf("%d", &y);
//     add(x, y);
// }
void main()
{
    int x;
    printf("Enter value of X : ");
    scanf("%d", &x);
    if (check_even_odd(x) == 1)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }
}
