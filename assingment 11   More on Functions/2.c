#include <stdio.h>

int hcf(int a, int b)
{
    int i, hcf;

    for (i = 1; i <= a && i <= b; i++)
        {
        if (a % i == 0 && b % i == 0)
            {
            hcf = i;
            }
        }

    return hcf;
}

int main()
{
    int num1, num2, result;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    result = hcf(num1, num2);

    printf("The HCF of %d and %d is %d\n", num1, num2, result);

    return 0;
}

