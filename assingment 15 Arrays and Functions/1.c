#include <stdio.h>

int findMax(int arr[], int size)
{
    int max = arr[0];
    int i;

    for (i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

int main()
{
    int arr[] = {10, 5, 20, 8, 15};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max = findMax(arr, size);

    printf("The greatest number in the array is %d", max);

    return 0;
}

