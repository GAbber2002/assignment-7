#include <stdio.h>

int main()
{
    int arr[10];
    int i, min;

    for (i = 0; i < 10; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &arr[i]);
    }

    min = arr[0];
    for (i = 1; i < 10; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("The smallest number in the array is: %d", min);

    return 0;
}
