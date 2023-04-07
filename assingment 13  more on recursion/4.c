#include <stdio.h>

int sum_of_squares(int n)
{
    if (n == 1)
        {
        return 1;
        }
    else
        {
        return n*n + sum_of_squares(n-1);
        }
}

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Sum of squares of first %d natural numbers is %d\n", n, sum_of_squares(n));
    return 0;
}
