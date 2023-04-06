#include <stdio.h>

int main()
{
    int n, i;
    long long fib1 = 0, fib2 = 1, fib3;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n == 0)
        {
        printf("0");
        }
    else if (n == 1)
        {
        printf("1");
        }
    else
        {
            for (i = 2; i <= n; i++)
            {
                fib3 = fib1 + fib2;
                fib1 = fib2;
                fib2 = fib3;
            }

        printf("%lld", fib3);
        }

    return 0;
}

