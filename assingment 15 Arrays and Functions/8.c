#include <stdio.h>

void print_unique(int arr[], int n)
{
    int is_duplicate;

    for (int i = 0; i < n; i++)
    {
        is_duplicate = 0;

        for (int j = 0; j < i; j++)
        {
            if (arr[j] == arr[i])
            {
                is_duplicate = 1;
                break;
            }
        }

        if (!is_duplicate)
        {
            printf("%d ", arr[i]);
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3, 2, 4, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    print_unique(arr, n);

    return 0;
}
