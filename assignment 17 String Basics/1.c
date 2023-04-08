#include <stdio.h>


int main() {
    char str[100];
    int len;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    printf("Length of the string is: %d\n", len);

    return 0;
}

