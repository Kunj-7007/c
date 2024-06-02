#include <stdio.h>
void main()
{
    char str[10] = {'m', 'o', 'o', 'm'};
    int counter = 0;
    for (size_t i = 0; str[i] != '\0'; i++)
    {
        counter++;
    }
    printf("%d\n", counter);
    int flag = 0;
    int i = 0;
    int j = counter - 1;
    while (i <= j)
    {
        if (str[i] != str[j])
        {
            printf("NO");
            flag = 1;
            break;
        }
        i++;
        j--;
    }
    if (flag == 0)
    {
        printf("YES");
    }
}
