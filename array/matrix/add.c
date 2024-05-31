#include <stdio.h>
void main()
{
    int arry1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    int arry2[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}};
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            printf("%d\t", arry1[i][j] + arry2[i][j]);
        }
        printf("\n");
    }
}