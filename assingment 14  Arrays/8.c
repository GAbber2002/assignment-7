#include <stdio.h>

int main()
{
    int arr[10];
    int i, smallest, second_smallest;

    for (i = 0; i < 10; i++)
    {

        printf("Enter a number: ");
        scanf("%d", &arr[i]);
    }

    smallest = arr[0];
    second_smallest = arr[0];
    for (i = 1; i < 10; i++)
    {
        if (arr[i] < smallest)
        {
            second_smallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] < second_smallest && arr[i] != smallest)
        {
            second_smallest = arr[i];
        }
    }

    printf("The second smallest number in the array is: %d", second_smallest);

    return 0;
}
