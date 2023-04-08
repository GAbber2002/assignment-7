#include <stdio.h>

void merge(int arr1[], int arr2[], int merged[], int size)
{
    int i = 0, j = 0, k = 0;

    while (i < size && j < size)
    {
        if (arr1[i] > arr2[j])
        {
            merged[k] = arr1[i];
            i++;
        }
    else
        {
            merged[k] = arr2[j];
            j++;
        }
        k++;
    }

    while (i < size)
    {
        merged[k] = arr1[i];
        i++;
        k++;
    }

    while (j < size)
    {
        merged[k] = arr2[j];
        j++;
        k++;
    }
}

int main()
{
    int arr1[] = {10, 8, 6, 4, 2};
    int arr2[] = {9, 7, 5, 3, 1};
    int size = sizeof(arr1) / sizeof(arr1[0]);
    int merged[size*2];

    merge(arr1, arr2, merged, size);

    printf("Merged array in descending order:\n");
    for (int i = 0; i < size*2; i++)
    {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}

