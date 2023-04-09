#include <stdio.h>

int isAlphanumeric(char str[])
{
    int length = strlen(str);
    for (int i = 0; i < length; i++)
    {
        if (!isalnum(str[i]))
         {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char myString1[] = "Hello123";
    char myString2[] = "Hello, World!";
    if (isAlphanumeric(myString1))
    {
        printf("%s is an alphanumeric string\n", myString1);
    }
    else
    {
        printf("%s is not an alphanumeric string\n", myString1);
    }
    if (isAlphanumeric(myString2))
    {
        printf("%s is an alphanumeric string\n", myString2);
    }
    else
    {

        printf("%s is not an alphanumeric string\n", myString2);
    }
    return 0;
}
