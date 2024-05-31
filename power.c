#include <stdio.h>
#include <math.h>
void main()
{
    int finalAns = 1;
    int ans[100];
    int i, j = 0;
    int number = 625;
    while (number > 1)
    {
        for (i = 2; i <= number; i++)
        {
            if (number % i == 0)
            {
                number = number / i;
                ans[j] = i;
                j++;
                break;
            }
        }
    }
    for (i = 0; i < 15 && ans[i] < 100; i++)
    {
        if (ans[i] == ans[i - 1])
        {
            finalAns *= ans[i];
            ans[i] = 99;
        }
    }
    printf("%d", finalAns);
    printf("\n%f", sqrt(999));
}