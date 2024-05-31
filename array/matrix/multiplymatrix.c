#include <stdio.h>
void main()
{
    int arr1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
    };
    int arr2[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1},
    };
    int i, j, x;
    int arr3[3][3];
    int sum = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum = 0;
            for (size_t k = 0; k < 3; k++)
            {
                sum += arr1[i][k] * arr2[k][j];
            }
            arr3[i][j] = sum;
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", arr3[i][j]);
        }
        printf("\n");
    }
}