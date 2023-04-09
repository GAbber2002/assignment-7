#include <stdio.h>


int stringLength(char str[])
{
    int length = strlen(str);
    return length;
}

int main()
{
    char myString[] = "Hello, World!";
    int length = stringLength(myString);
    printf("The length of the string is %d", length);
    return 0;
}

