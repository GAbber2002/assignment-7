#include <stdio.h>

int main()
{
    int n, fib1 = 0, fib2 = 1, fib3;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (fib2 < n)
        {
        fib3 = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib3;
    }

    if (fib2 == n);
        {
        printf("%d is a Fibonacci number.", n);
    } else {
        printf("%d is not a Fibonacci number.", n);
    }

    return 0;
}

