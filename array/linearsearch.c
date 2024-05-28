#include <stdio.h>
void main()
{
    int emp[5] = {99, 150, 2000, 400, 9000};
    int target = 2000;
    int i = 0;
    for (i = 0; i < 5; i++)
    {
        if (target == emp[i])
        {
            printf("\n The id is %d", i);
            break;
        }
    }
}