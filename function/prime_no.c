#include <stdio.h>
int prim(int userInput)
{
    int i = 2;
    int end = userInput - 1;
    while (i <= end)
    {
        if (userInput % i == 0)
        {
            printf("The number is not prime");
            return 0;
        }
        i++;
    }
    printf("it is prime");
}

void main()
{
    prim(5);
}
