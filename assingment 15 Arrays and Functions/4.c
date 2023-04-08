#include <stdio.h>

void rotateArray(int arr[], int size, int n, char direction) {
    int temp, i, j;
    }
    if (direction == 'l')
    {

            arr[size-1] = temp;
        }
    }
    else if (direction == 'r') { // right rotation
        for (i = 0; i < n; i++) {
            temp = arr[size-1];
            for (j = size-1; j > 0; j--) {
                arr[j] = arr[j-1];
            }
            arr[0] = temp;
        }
    }
}

int main() {
    int arr[] = {32, 29, 40, 12, 70};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i, n;
    char direction;

    printf("Enter the number of positions to rotate by: ");
    scanf("%d", &n);

    printf("Enter the direction of rotation (l for left, r for right): ");
    scanf(" %c", &direction);

    rotateArray(arr, size, n, direction);

    printf("The rotated array is: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
