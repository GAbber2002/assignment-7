#include <stdio.h>

void print_odd_natural_numbers(int n)
{
    for (int i = 1; i <= 2*n; i+=2)
        {
        printf("%d ", i);
        }
    printf("\n");
}

int main()
{
    int N = 5;
    print_odd_natural_numbers(N);
    return 0;
}

