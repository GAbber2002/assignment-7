#include <stdio.h>

void fibonacci(int n)
{
    static int a = 0, b = 1, c;
    if (n > 0)
        {
        c = a + b;
        a = b;
        b = c;
        printf("%d ", c);
        fibonacci(n-1);
    }
}

int main()
{
    int n;
    printf("Enter the number of terms to be printed: ");
    scanf("%d", &n);
    printf("Fibonacci series: 0 1 ");
    fibonacci(n-2);
    return 0;
}

