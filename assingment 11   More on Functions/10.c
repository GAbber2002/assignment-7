#include <stdio.h>

int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n-1);
}

int main()
{
    int i, n = 5;
    float sum = 0.0;

    for (i = 1; i <= n; i++)
    {

        sum += factorial(i) / i;
    }

    printf("Sum of the series 1!/1 + 2!/2 + 3!/3 + 4!/4 + 5!/5 = %.2f", sum);

    return 0;
}
