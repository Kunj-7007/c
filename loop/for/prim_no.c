#include <stdio.h>
void main()
{
    int i;
    int number = 99;
    int flag = 0;
    int end = number - 1;
    for (i = 2; i <= end; i++)
    {
        if (number % i == 0)
        {
            printf("The number is not prime ");
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("Te number is prime");
    }
}