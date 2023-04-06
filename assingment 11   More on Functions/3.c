#include <stdio.h>

int is_prime(int num)
{
    int i;

    if (num < 2)
        {
        return 0;
        }

    for (i = 2; i <= num / 2; i++)
        {
        if (num % i == 0)
            {
                return 0;
            }
        }

    return 1;
}

int main()
{
    int num, result;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    result = is_prime(num);

    if (result == 1) {
        printf("%d is prime\n", num);
    }
    else {
        printf("%d is not prime\n", num);
    }

    return 0;
}

