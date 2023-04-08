#include <stdio.h>

void bubble_sort(char arr[][100], int n)
{
    int i, j;
    char temp[100];

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (strcmp(arr[j], arr[j + 1]) > 0)
            {
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }
}

int main()
{
    int n, i;
    char arr[10][100];

    printf("Enter the number of strings: ");
    scanf("%d", &n);

    printf("Enter the strings:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%s", arr[i]);
    }

    bubble_sort(arr, n);

    printf("The sorted strings are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%s\n", arr[i]);
    }

    return 0;
}
