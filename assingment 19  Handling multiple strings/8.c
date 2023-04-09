#include <stdio.h>
#include <string.h>
#include <limits.h>

#define MAX_NUM_WORDS 100
#define MAX_WORD_LENGTH 20

int main()
{
    char words[MAX_NUM_WORDS][MAX_WORD_LENGTH];
    int num_words;
    char word1[MAX_WORD_LENGTH], word2[MAX_WORD_LENGTH];
    int index1 = -1, index2 = -1;
    int min_distance = INT_MAX;

    // read in the list of words
    printf("Enter the number of words: ");
    scanf("%d", &num_words);
    printf("Enter the words:\n");
    for (int i = 0; i < num_words; i++)
    {
        scanf("%s", words[i]);
    }

    // read in the two words to find the distance between
    printf("Enter two words: ");
    scanf("%s %s", word1, word2);

    // find the indices of the two words in the list of words
    for (int i = 0; i < num_words; i++)
        {
        if (strcmp(words[i], word1) == 0)
        {
            index1 = i;
        }
        if (strcmp(words[i], word2) == 0)
        {
            index2 = i;
        }
        if (index1 != -1 && index2 != -1)
        {
            int distance = abs(index1 - index2);
            if (distance < min_distance)
            {
                min_distance = distance;
            }
        }
    }

    if (index1 == -1 || index2 == -1)
    {
        printf("One or both of the words was not found in the list.\n");
    }
    else
    s{
        printf("The minimum distance between %s and %s is %d.\n", word1, word2, min_distance);
    }

    return 0;
}

