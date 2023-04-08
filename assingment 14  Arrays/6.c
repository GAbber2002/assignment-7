#include <stdio.h>

int main()
{
    int arr[10];
    int i, j, temp;

    for (i = 0; i < 10; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (arr[i] > arr[j])
             {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("The sorted array is: ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
