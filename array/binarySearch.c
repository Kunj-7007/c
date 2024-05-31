#include <stdio.h>
void main()
{
    int arr[7] = {1, 2, 3, 4, 6, 7, 8};
    int target = 5;
    int i = 0, j = sizeof(arr) / sizeof(arr[0]);
    int mid;
    int flag = 0;
    while (i <= j)
    {
        mid = (i + j) / 2;
        if (arr[mid] == target)
        {
            printf("Target found at %d", mid);
            flag = 1;
            break;
        }
        else if (arr[mid] < target)
        {
            i = mid + 1;
        }
        else
        {
            j = mid - 1;
        }
    }
    if (flag == 0)
    {
        printf("Target not found");
    }
}