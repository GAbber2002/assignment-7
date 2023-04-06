#include <stdio.h>

int is_even(int num)
{
    if (num % 2 == 0)
        {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int number = 5;

    if (is_even(number))
        {
        printf("%d is even\n", number);
        }
    else
        {
        printf("%d is odd\n", number);
        }
    return 0;
}

