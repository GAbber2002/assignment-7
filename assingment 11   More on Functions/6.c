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

void print_primes_between(int start, int end)
{
    int i;

    printf("Prime numbers between %d and %d are: ", start, end);

    for (i = start; i <= end; i++)
    {
        if (is_prime(i))
        {
            printf("%d ", i);
        }
    }

    printf("\n");
}

int main()
{
    int start, end;

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    print_primes_between(start, end);

    return 0;
}
