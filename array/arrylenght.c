#include <stdio.h>
void main()
{
    int emp[7] = {55, 66, 77, 88, 99, 77, 99};
    int i, j = 0;
    printf("%d", sizeof(emp) / sizeof(emp[0]));
}