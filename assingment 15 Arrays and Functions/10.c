#include <stdio.h>

void count_frequency(int arr[], int size)
{
    int count[size];

    for (int i = 0; i < size; i++)
    {
        count[i] = 0;
    }

    for (int i = 0; i < size; i++)
    {
        count[arr[i]]++;
    }

    printf("Element   Frequency\n");
    for (int i = 0; i < size; i++)
    {
        if (count[i] != 0)
        {
            printf("%d         %d\n", i, count[i]);
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 2, 3, 4, 1, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    count_frequency(arr, size);

    return 0;
}
