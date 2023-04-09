#include <stdio.h>

char findRepeatedChar(char str[])
{
    int length = strlen(str);
    int charCount[256] = {0};
    for (int i = 0; i < length; i++)
        {
        charCount[str[i]]++;
        if (charCount[str[i]] == 2)
        {
            return str[i];
        }
    }
    return '\0';
}

int main()
{
    char myString[] = "hello world";
    char repeatedChar = findRepeatedChar(myString);
    if (repeatedChar != '\0')
    {
        printf("The first repeated character is '%c'\n", repeatedChar);
    }
    else
    {
        printf("No repeated characters found\n");
    }
    return 0;
}
