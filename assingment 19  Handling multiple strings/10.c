#include <stdio.h>
#include <string.h>

#define MAX_NUM_USERS 10
#define MAX_USERNAME_LENGTH 20
#define MAX_PASSWORD_LENGTH 20

int main()
 {
    char usernames[MAX_NUM_USERS][MAX_USERNAME_LENGTH] = {"alice", "bob", "charlie"};
    char passwords[MAX_NUM_USERS][MAX_PASSWORD_LENGTH] = {"password1", "password2", "password3"};
    int num_users = 3;

    int choice;
    int authenticated = 0;
    char username[MAX_USERNAME_LENGTH];
    char password[MAX_PASSWORD_LENGTH];

    while (1)
        {
        // display the menu options
        printf("1. Login\n");
        printf("2. Exit\n");

        // get the user's choice
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                // prompt the user to enter their username and password
                printf("Enter your username: ");
                scanf("%s", username);

                printf("Enter your password: ");
                scanf("%s", password);

                // check if the username and password match an entry in the user database
                for (int i = 0; i < num_users; i++)
                    {
                    if (strcmp(usernames[i], username) == 0 && strcmp(passwords[i], password) == 0) {
                        authenticated = 1;
                        break;
                    }
                }

                // print a message indicating whether authentication was successful or not
                if (authenticated)
                    {
                    printf("Authentication successful.\n");
                }
                else
                 {
                    printf("Authentication failed.\n");
                }

                break;
            case 2:
                // exit the program
                printf("Goodbye!\n");
                return 0;
            default:
                // handle invalid choices
                printf("Invalid choice. Please try again.\n");
                break;
        }
    }
}

