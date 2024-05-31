#include <stdio.h>
void swap(int *i, int *j)
{
    int temp;
    temp = *i;
    *i = *j;
    *j = temp;
}
void main()
{
    int i = 30, j = 40;
    swap(&i, &j);
    printf("%d\t%d", i, j);
}