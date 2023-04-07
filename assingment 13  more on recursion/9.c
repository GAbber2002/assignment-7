#include <stdio.h>

int countDigits(int n)
 {
    if (n == 0)
        {
        return 0;
        }
    else
    {
        return 1 + countDigits(n/10);
    }
}

int main()
{
    int n;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);
    printf("Number of digits: %d\n", countDigits(n));
    return 0;
}
