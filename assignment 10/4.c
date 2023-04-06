#include <stdio.h>

void print_natural_numbers(int n)
{
    for (int i = 1; i <= n; i++)
        {
        printf("%d ", i);
        }
    printf("\n");
}

int main()
 {
    int N = 10;
    print_natural_numbers(N);
    return 0;
}

