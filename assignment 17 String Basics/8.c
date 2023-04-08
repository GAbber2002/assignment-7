#include <stdio.h>


int main()
{
    char source[100], destination[100];

    printf("Enter the source string: ");
    scanf("%s", source);

    strcpy(destination, source);

    printf("The copied string is: %s\n", destination);

    return 0;
}
