#include <stdio.h>

void toUpperCase(char str[])
{
    int length = strlen(str);
    for (int i = 0; i < length; i++)
    {
        str[i] = toupper(str[i]);
    }
}

int main()
{
    char myString[] = "Hello, World!";
    printf("Before transformation: %s\n", myString);
    toUpperCase(myString);
    printf("After transformation: %s", myString);
    return 0;
}
