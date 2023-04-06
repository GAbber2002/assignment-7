#include <stdio.h>

int contains_digit(int number, int digit)
{
    while (number != 0)
        {
        int remainder = number % 10;
        if (remainder == digit)
        {
            return 1;
        }
        number /= 10;
    }
    return 0;
}

int main()
{
    int number = 12345, digit = 3;
    if (contains_digit(number, digit))
        {
        printf("The number %d contains the digit %d\n", number, digit);
    }
     else
    {
        printf("The number %d does not contain the digit %d\n", number, digit);
    }
    return 0;
}

