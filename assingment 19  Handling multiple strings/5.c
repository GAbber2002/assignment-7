#include <stdio.h>
#include <string.h>


int main()
{
    char emails[NUM_EMAILS][MAX_EMAIL_LENGTH] = {"john@example.com", "jane@example.com", "doeexample.com", "jim@example.com", "jess@example.com"};
    char odd_email[MAX_EMAIL_LENGTH];
    int odd_email_found = 0;


    for (int i = 0; i < NUM_EMAILS; i++)
    {
        if (strchr(emails[i], '@') == NULL)
        {

            printf("Email at index %d does not contain '@' symbol\n", i);
            odd_email_found = 1;
        }
    }

    if (odd_email_found)
    {
        for (int i = 0; i < NUM_EMAILS; i++)
        {
            if (strchr(emails[i], '@') != NULL)
            {
                printf("Odd email out: %s\n", emails[i]);
                break;
            }
        }
    } else {
        printf("All emails have '@' symbol in them\n");
    }

    return 0;
}
