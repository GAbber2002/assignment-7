#include <stdio.h>
#include <string.h>

#define MAX_NUM_USERNAMES 10
#define MAX_USERNAME_LENGTH 20

int main()
{
    char usernames[MAX_NUM_USERNAMES][MAX_USERNAME_LENGTH] = {"Alice", "Bob", "Charlie", "Dave"};
    int num_usernames = 4;
    char username[MAX_USERNAME_LENGTH];
    int n;
    int factorial = 1;

    // prompt the user to enter a username
    printf("Enter your username: ");
    scanf("%s", username);

    // check if the username is in the list of valid usernames
    int username_valid = 0;
    for (int i = 0; i < num_usernames; i++)
        {
        if (strcmp(usernames[i], username) == 0)
        {
            username_valid = 1;
            break;
        }
    }

    // if the username is valid, prompt the user to enter a number and calculate its factorial
    if (username_valid)
        {
        printf("Enter a non-negative integer to calculate its factorial: ");
        scanf("%d", &n);

        if (n < 0)
            {
            printf("Error: the number must be non-negative.\n");
        } else
        {
            for (int i = 1; i <= n; i++)
            {
                factorial *= i;
            }
            printf("%d! = %d\n", n, factorial);
        }
    }
     else
        {
        printf("Error: invalid username.\n");
    }

    return 0;
}

