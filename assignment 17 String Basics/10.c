#include <stdio.h>

int main()
{
    char str[MAX_SIZE];
    int freq[256] = {0};
    int i, len;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    len = strlen(str);

    for (i = 0; i < len; i++)
    {
        freq[(int)str[i]]++;
    }

    printf("Frequency of characters in the string:\n");
    for (i = 0; i < 256; i++)
    {
        if (freq[i] != 0)
        {
            printf("%c: %d\n", (char)i, freq[i]);
        }
    }

    return 0;
}
