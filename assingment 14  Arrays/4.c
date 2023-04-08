#include <stdio.h>

int main()
{
    int arr[10];
    int i, max;

    for (i = 0; i < 10; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    for (i = 1; i < 10; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("The greatest number in the array is: %d", max);

    return 0;
}
