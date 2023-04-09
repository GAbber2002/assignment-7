#include <stdio.h>

void toLowerCase(char str[])
{
    int length = strlen(str);
    for (int i = 0; i < length; i++)
    {
        str[i] = tolower(str[i]);
    }
}

int main()
{
    char myString[] = "Hello, World!";
    printf("Before transformation: %s\n", myString);
    toLowerCase(myString);
    printf("After transformation: %s", myString);
    return 0;
}
