#include <stdio.h>


void reverseString(char str[])
{
    int length = strlen(str);
    for (int i = 0; i < length/2; i++)
    {
        char temp = str[i];
        str[i] = str[length-i-1];
        str[length-i-1] = temp;
    }
}

int main() {
    char myString[] = "Hello, World!";
    printf("Before reversing: %s\n", myString);
    reverseString(myString);
    printf("After reversing: %s", myString);
    return 0;
}
