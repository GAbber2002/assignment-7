#include <stdio.h>

int main()
{
    char str[100];
    int alphabets = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    int i;
    for (i = 0; str[i] != '\0'; i++)
        {
        if (isalpha(str[i]))
        {
            alphabets++;
        }
        else if (isdigit(str[i]))
        {
            digits++;
        }
        else
        {
            special++;
        }
    }

    printf("Total alphabets: %d\n", alphabets);
    printf("Total digits: %d\n", digits);
    printf("Total special characters: %d\n", special);

    return 0;
}
