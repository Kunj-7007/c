#include <stdio.h>
int exponential(int base, int ex)
{
    int i = 1;
    int ans = 1;
    while (i <= ex)
    {
        ans = ans * base;
        i++;
    }
    return ans;
}

void main()
{
    int base = 2;
    int ex = 10;
    printf("%d", exponential(base, ex));
}