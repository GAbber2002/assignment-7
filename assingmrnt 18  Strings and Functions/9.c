#include <stdio.h>

void reverse(char str[], int start, int end)
 {
    while (start < end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

void reverseWords(char str[])
{
    int length = strlen(str);
    int start = 0;
    for (int i = 0; i < length; i++)
        {
        if (str[i] == ' ')
        {
            reverse(str, start, i - 1);
            start = i + 1;
        }
    }
    reverse(str, start, length - 1);
    reverse(str, 0, length - 1);
}

int main()
{
    char myString[] = "iNeuron Education Services";
    printf("Original string: %s\n", myString);
    reverseWords(myString);
    printf("Reversed string: %s\n", myString);
    return 0;
}
