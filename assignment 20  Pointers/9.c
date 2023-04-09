#include <stdio.h>

void printArrayReverse(int *arr, int n);

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
        {
        scanf("%d", &arr[i]);
    }
    printf("Array elements in reverse order:\n");
    printArrayReverse(arr, n);
    return 0;
}

void printArrayReverse(int *arr, int n)
 {
    for (int i = n - 1; i >= 0; i--)
        {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}
