#include <stdio.h>

int sum_of_odd_numbers(int n)
{
    if (n == 1)
        {
        return 1;
        }
    else
        {
        return (2*n - 1) + sum_of_odd_numbers(n-1);
        }
}

int main()
{
    int n = 5;
    int result = sum_of_odd_numbers(n);
    printf("The sum of the first %d odd natural numbers is %d\n", n, result);
    return 0;
}
