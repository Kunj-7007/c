#include <stdio.h>
void main()
{
    int i = 20;
    int *pointer_1;
    // *pointer_1 = i;

    pointer_1 = &i;

    printf("%d", *pointer_1);
}