#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    int len = strlen(str) - 1;
    char *ptr = str + len;

    printf("Reversed string: ");
    while (ptr >= str)
        {
        putchar(*ptr);
        ptr--;
    }
    printf("\n");
    return 0;
}
