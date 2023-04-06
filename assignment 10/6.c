#include <stdio.h>

int factorial(int n)
{
    int i, fact = 1;
    for (i = 1; i <= n; i++)
        {
        fact *= i;
        }
    return fact;
}

int main()
{
    int num;
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &num);
    printf("Factorial of %d = %d", num, factorial(num));
    return 0;
}

