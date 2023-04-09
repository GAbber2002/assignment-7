#include <stdio.h>

int stringLength(char *str);


int main()
 {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int len = stringLength(str);
    printf("Length of string: %d\n", len);
    return 0;
}

int stringLength(char *str)
 {
    int len = 0;
    while (*str != '\0')
        {
        len++;
        str++;
    }
    return len;
}
