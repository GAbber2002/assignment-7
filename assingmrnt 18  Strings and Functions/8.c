#include <stdio.h>

int countWords(char str[])
{
    int count = 0;
    int length = strlen(str);
    int isWord = 0;
    for (int i = 0; i < length; i++)
    {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        {
            isWord = 0;
        }
    else if (isWord == 0)
        {
            isWord = 1;
            count++;
        }
    }
    return count;
}

int main()
{
    char myString1[] = "This is a sentence.";
    char myString2[] = "   There    are  six     words in this sentence.   ";
    printf("Number of words in \"%s\": %d\n", myString1, countWords(myString1));
    printf("Number of words in \"%s\": %d\n", myString2, countWords(myString2));
    return 0;
}
