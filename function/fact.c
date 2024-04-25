#include <stdio.h>
int fact(int i)
{
    int c = 1;
    while (i > 0)
    {
        c = i * c;
        i--;
    }
    return c;
}
void main()
{
    int x;
    printf("Enter the value for factorial: ");
    scanf("%d", &x);
    printf("%d", fact(x));
}