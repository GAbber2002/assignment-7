#include <stdio.h>

int main() {
    int num, position = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Find the position of the first 1 in the LSB
    while ((num & 1) == 0) {
        num >>= 1;
        position++;
    }

    printf("The position of the first 1 in the LSB is: %d\n", position);

    return 0;
}

