#include <stdio.h>

int sumEven(int n)
{
    if (n == 1)
        {
        return 2;

        }
    else
        {
        return 2*n + sumEven(n-1); // recursive call
        }
}

int main()
{
    int n = 5;
    int result = sumEven(n);
    printf("The sum of the first %d even natural numbers is %d.\n", n, result);
    return 0;
}
