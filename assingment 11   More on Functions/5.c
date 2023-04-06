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

void print_primes(int n)
{
    int count = 0, num = 2;

    while (count < n)
        {
        if (is_prime(num))
        {
            printf("%d ", num);
            count++;
        }
        num++;
    }
}

int main()
{
    int n;

    printf("Enter the number of primes to print: ");
    scanf("%d", &n);

    printf("The first %d prime numbers are: ", n);
    print_primes(n);
    printf("\n");

    return 0;
}
