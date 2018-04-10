#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_STRING_SIZE 80

void lowercase(char *line)
{
    for (; *line; line++)
        *line = tolower(*line); /* ctype.c method */
}

void lowercase2(char *line)
{
    for (; *line; line++)
        line[0] = tolower(line[0]); /* ctype.c method */
}

void lowercase3(char *line)
{
    for (; *line; line++)
    {
        if(line[0] >= 'A' && line[0] <= 'Z')
            line[0] += 32;
    }
}

int main()
{
    char line[MAX_STRING_SIZE + 1]; /* To save space for '\0' */
    char line2[MAX_STRING_SIZE +1];
    char line3[MAX_STRING_SIZE +1];

    /* Input from the user */
    printf("Enter string to convert to lower case (max size is %d):\n", MAX_STRING_SIZE);
    fgets(line, MAX_STRING_SIZE + 1, stdin);
   
    /* Copying the input so we can run the 3 methods */
    strcpy(line2, line);
    strcpy(line3, line);

    /* Converting: */
    lowercase(line); /* ok */
    lowercase2(line2); /* okish */
    lowercase3(line3); /* okish */

    printf("The lower cased string is (after lowercase()): %s", line);
    printf("The lower cased string is (after lowercase2()): %s", line2);
    printf("The lower cased string is (after lowercase3()): %s", line3);
    return 0;
}
