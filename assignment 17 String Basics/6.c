#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], rev[100];
    int i, j;

    printf("Enter a string: ");
    scanf("%s", str);

    j = 0;
    for (i = strlen(str) - 1; i >= 0; i--)
    {
        rev[j++] = str[i];
    }
    rev[j] = '\0';

    printf("The reversed string is: %s\n", rev);

    return 0;
}
