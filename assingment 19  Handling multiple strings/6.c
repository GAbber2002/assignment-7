#include <stdio.h>
#include <string.h>

#define NUM_STRINGS 5
#define MAX_STRING_LENGTH 50

int main()
{
    char strings[NUM_STRINGS][MAX_STRING_LENGTH] = {"racecar", "apple", "deified", "banana", "level"};

    // check whether each string is a palindrome
    for (int i = 0; i < NUM_STRINGS; i++)
        {
        int is_palindrome = 1;
        int length = strlen(strings[i]);

        for (int j = 0; j < length / 2; j++)
            {
            if (strings[i][j] != strings[i][length - j - 1])
            {
                is_palindrome = 0;
                break;
            }
        }

        if (is_palindrome)
            {
            printf("%s is a palindrome\n", strings[i]);
        }
    }

    return 0;
}

