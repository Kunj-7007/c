#include <stdio.h>
void main()
{
    int i[5] = {1, 2, 3, 4, 5};
    int *pointer_1;
    pointer_1 = &i[0];
    int add = (int)pointer_1 + (sizeof(i) - sizeof(i[0]));
    printf("%d is the pointer 1 and %d is add", (int)pointer_1, add);
    while ((int)pointer_1 <= add)
    {
        printf("\n%d\n", *pointer_1);
        printf("%d\t", (int)pointer_1);
        pointer_1 += 1;
    }
}