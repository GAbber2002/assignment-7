#include <stdio.h>


int main()
{
    int num, original_num, digit_count = 0, sum = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    original_num = num;

    while (original_num != 0) {
        digit_count++;
        original_num /= 10;
    }

    original_num = num;


    while (original_num != 0) {
        remainder = original_num % 10;
        sum += pow(remainder, digit_count);
        original_num /= 10;
    }

    if (num == sum) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}

