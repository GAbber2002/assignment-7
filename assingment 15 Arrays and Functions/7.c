#include <stdio.h>

int count_duplicates(int arr[], int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < i; j++)
        {
            if (arr[j] == arr[i])
            {
                count++;
                break;
            }
        }
    }

    return count;
}

int main()
{
    int arr[] = {1, 2, 3, 2, 4, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int num_duplicates = count_duplicates(arr, n);

    printf("Number of duplicates: %d\n", num_duplicates);

    return 0;
}
