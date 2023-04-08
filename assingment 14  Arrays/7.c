#include <stdio.h>

int main()
{
    int arr[10];
    int i, largest, second_largest;

    for (i = 0; i < 10; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &arr[i]);
    }

    largest = arr[0];
    second_largest = arr[0];
    for (i = 1; i < 10; i++)
    {
        if (arr[i] > largest)
        {
            second_largest = largest;
            largest = arr[i];
        }
    else if (arr[i] > second_largest && arr[i] != largest)
        {
            second_largest = arr[i];
        }
    }

    printf("The second largest number in the array is: %d", second_largest);

    return 0;
}
