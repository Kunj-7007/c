#include <stdio.h>
void main()
{
    char name[10] = {'K', 'u', 'n', 'j'};
    int counter = 0;
    for (size_t i = 0; name[i] != '\0'; i++)
    {
        counter++;
    }
    char rev[10];

    for (size_t i = 0; i < counter; i++)
    {
        rev[i] = name[counter - i - 1];
    }
    rev[counter] = '\0';
    printf("%s", rev);
}