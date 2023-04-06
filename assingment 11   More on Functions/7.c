#include <stdio.h>

void print_fibonacci(int n)
{
    int i, term1 = 0, term2 = 1, next_term;

    printf("The first %d terms of the Fibonacci series are: ", n);

    for (i = 1; i <= n; i++)
    {
        printf("%d ", term1);
        next_term = term1 + term2;
        term1 = term2;
        term2 = next_term;
    }

    printf("\n");
}

int main()
{
    int n;

    printf("Enter the number of terms to print: ");
    scanf("%d", &n);

    print_fibonacci(n);

    return 0;
}

