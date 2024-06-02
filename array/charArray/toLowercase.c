#include <stdio.h>
#include <string.h>
void main()
{
    char str[100];
    printf("Enter string: ");
    gets(str);
    for (size_t i = 0; str[i] != '\0'; i++)
    {
        if ((int)str[i] > 90)
        {
            continue;
        }
        str[i] = (32 + str[i]);
    }
    printf("\n%s", str);
}