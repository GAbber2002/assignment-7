#include <stdio.h>

int calculate_arrangements(int n, int r)
{
    int numerator = 1;
    for (int i = n; i >= n-r+1; i--)
        {
        numerator *= i;
        }
    int arrangements = numerator;
    return arrangements;
}

int main()
{
    int n = 5, r = 3;
    int arrangements = calculate_arrangements(n, r);
    printf("The number of arrangements of %d items taken %d at a time is %d\n", n, r, arrangements);
    return 0;
}

