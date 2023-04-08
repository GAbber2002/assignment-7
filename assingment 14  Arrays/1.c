#include <stdio.h>

int main()
{
    int arr[10];
    int i, total = 0;

    for (i = 0; i < 10; i++)
        {
        printf("Enter a number: ");
        scanf("%d", &arr[i]);
        }


    for (i = 0; i < 10; i++)
    {
        total += arr[i];
    }


    printf("The sum of the numbers is: %d", total);

    return 0;
}

