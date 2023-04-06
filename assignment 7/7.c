#include <stdio.h>

int main() {
    int start, end, i, j, is_prime;

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are:\n", start, end);

    for (i = start; i <= end; i++) {
        is_prime = 1;
        for (j = 2; j <= i/2; j++) {
            if (i % j == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime == 1 && i != 1) {
            printf("%d\n", i);
        }
    }

    return 0;
}

