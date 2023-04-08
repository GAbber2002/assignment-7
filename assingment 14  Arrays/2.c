#include <stdio.h>

int main()
{
    int arr[10];
    int i, total = 0;
    float avg;

    for (i = 0; i < 10; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 10; i++)
    {
        total += arr[i];
    }

    avg = (float) total / 10;

    printf("The average of the numbers is: %f", avg);

    return 0;
}
