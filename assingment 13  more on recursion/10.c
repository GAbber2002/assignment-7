#include <stdio.h>

double power(double x, int n)
 {
    if (n == 0)
        {
        return 1;
    }
    else if (n > 0)
     {
        return x * power(x, n-1);
    }
     else
        {
        return 1 / power(x, -n);
    }
}

int main()
{
    double x;
    int n;
    printf("Enter a real number: ");
    scanf("%lf", &x);
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);
    printf("%lf to the power of %d = %lf\n", x, n, power(x, n));
    return 0;
}
