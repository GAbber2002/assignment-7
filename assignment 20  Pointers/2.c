#include<stdio.h>

void swap_strings(char *str1, char *str2, int len)
 {
    char temp;
    for (int i = 0; i < len; i++)
        {
        temp = str1[i];
        str1[i] = str2[i];
        str2[i] = temp;
    }
}

int main()
 {
    char str1[] = "hello";
    char str2[] = "world";
    int len = strlen(str1);
    printf("Before swap: str1 = %s, str2 = %s\n", str1, str2);
    swap_strings(str1, str2, len);
    printf("After swap: str1 = %s, str2 = %s\n", str1, str2);
    return 0;
}
