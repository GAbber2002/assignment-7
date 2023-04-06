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

int next_prime(int num)
{
    num++;

    while (1) {
        if (is_prime(num))
        {
            return num;
        }
        num++;
    }
}

int main() {
    int num, result;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    result = next_prime(num);

    printf("The next prime number after %d is %d\n", num, result);

    return 0;
}
