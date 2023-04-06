#include <stdio.h>

void print_prime_factors(int number)
{
    for (int i = 2; i <= number; i++)
    {
        while (number % i == 0)
        {
            printf("%d ", i);
            number /= i;
        }
    }
    printf("\n");
}

int main()
{
    int number = 36;
    printf("The prime factors of %d are: ", number);
    print_prime_factors(number);
    return 0;
}

