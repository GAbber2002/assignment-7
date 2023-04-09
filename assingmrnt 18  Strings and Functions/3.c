#include <stdio.h>


int compareStrings(char str1[], char str2[])
{
    int result = strcmp(str1, str2);
    if (result == 0)
    {
        printf("The strings are equal\n");
    }
    else
    {
        printf("The strings are not equal\n");
    }
    return result;
}

int main()
{
    char myString1[] = "Hello, World!";
    char myString2[] = "Hello, World!";
    int result = compareStrings(myString1, myString2);
    printf("The result of comparison is %d", result);
    return 0;
}
