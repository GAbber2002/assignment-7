#include <stdio.h>

int is_prime(int num) {
    int i;
    for (i = 2; i <= num/2; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int num, next_prime;

    printf("Enter a number: ");
    scanf("%d", &num);

    next_prime = num + 1;
    while (!is_prime(next_prime)) {
        next_prime++;
    }

    printf("The next prime number after %d is %d.\n", num, next_prime);

    return 0;
}

