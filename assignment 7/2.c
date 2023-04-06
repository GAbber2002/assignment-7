#include <stdio.h>

int main()
{
    int n, i;
    long long fib1 = 0, fib2 = 1, fib3;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; i++)
        {
        printf("%lld, ", fib1);
        fib3 = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib3;
        }

    return 0;
}

