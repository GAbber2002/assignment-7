#include <stdio.h>

int main()
{
    int arr[10];
    int i, sum_even = 0, sum_odd = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 10; i++)
        {
        if (arr[i] % 2 == 0)
        {
            sum_even += arr[i];
        }
    else
        {
            sum_odd += arr[i];
        }
    }

    printf("Sum of even numbers: %d\n", sum_even);
    printf("Sum of odd numbers: %d\n", sum_odd);

    return 0;
}
