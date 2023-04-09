#include <stdio.h>

int isPalindrome(char str[])
{
    int length = strlen(str);
    for (int i = 0; i < length/2; i++)
    {
        if (str[i] != str[length-1-i])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char myString1[] = "racecar";
    char myString2[] = "Hello, World!";
    if (isPalindrome(myString1))
    {
        printf("%s is a palindrome\n", myString1);
    }
    else
    {
        printf("%s is not a palindrome\n", myString1);
    }
    if (isPalindrome(myString2))
    {
        printf("%s is a palindrome\n", myString2);
    }
    else
    {
        printf("%s is not a palindrome\n", myString2);
    }
    return 0;
}
