#include <stdio.h>

int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
        {
        return n + sum(n-1);
        }
}

int main()
{
    int n = 5;
    int result = sum(n);
    printf("The sum of the first %d natural numbers is %d\n", n, result);
    return 0;
}

