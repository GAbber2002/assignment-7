#include <stdio.h>

int main()
{
    int arr1[10], arr2[10];
    int i;

    printf("Enter 10 numbers: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr1[i]);
        arr2[i] = arr1[i];
    }

    printf("Original array: ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr1[i]);
    }

    printf("\nCopied array: ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr2[i]);
    }

    return 0;
}
