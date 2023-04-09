#include <stdio.h>

int arraySum(int *arr, int n);

int main() {

    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
        {
        scanf("%d", &arr[i]);
    }
    int sum = arraySum(arr, n);
    printf("Sum of array elements: %d\n", sum);
    return 0;
}

int arraySum(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        {
        sum += *(arr + i);
    }
    return sum;
}
