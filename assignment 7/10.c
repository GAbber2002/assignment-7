#include <stdio.h>

int main()
{
    int num, original_num, digit_count, sum, remainder;

    printf("Armstrong numbers under 1000:\n");

    for (num = 1; num < 1000; num++) {
        original_num = num;
        digit_count = 0;
        sum = 0;

        // Count the number of digits in the number
        while (original_num != 0) {
            digit_count++;
            original_num /= 10;
        }

        original_num = num;

        // Calculate the sum of the cubes of the digits
        while (original_num != 0) {
            remainder = original_num % 10;
            sum += pow(remainder, digit_count);
            original_num /= 10;
        }

        // Check if the number is an Armstrong number or not
        if (num == sum) {
            printf("%d\n", num);
        }
    }

    return 0;
}
