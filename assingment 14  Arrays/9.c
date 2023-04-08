#include <stdio.h>

int main()
{
    int arr[100];
    int i, n;

    printf("Enter the number of elements in the array (max 100): ");
    scanf("%d", &n);
    printf("Enter %d numbers: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("The array in reverse order is: ");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
