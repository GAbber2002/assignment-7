#include <stdio.h>
#include <ctype.h>

void countVowelsAndConsonants(char *str, int *vowels, int *consonants);

int main()
{
    char str[100];
    int vowels = 0, consonants = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    countVowelsAndConsonants(str, &vowels, &consonants);
    printf("Vowels: %d\nConsonants: %d\n", vowels, consonants);
    return 0;
}

void countVowelsAndConsonants(char *str, int *vowels, int *consonants)
{
    while (*str != '\0'
           ){
        if (isalpha(*str))
            {
            if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' ||
                *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U')
                 {
                (*vowels)++;
            }
             else
                {
                (*consonants)++;
            }
        }
        str++;
    }
}
