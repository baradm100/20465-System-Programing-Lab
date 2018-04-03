#include <stdio.h>
#include <string.h>
#define MAX_STRING_SIZE 80

void lowercase(char *line)
{
    for (; *line; line++)
        line[0] = tolower(line[0]);
}

void lowercase2(char *line)
{
    for (; *line; line++)
    {
        if(line[0] >= 'A' && line[0] <= 'Z')
            line[0] -= 'a';
    }
}

int main()
{
    char line[MAX_STRING_SIZE + 1]; /* To save space for '\0' */
    printf("Enter string to convert to lower case (max size is %d):\n", MAX_STRING_SIZE);
    fgets(line, MAX_STRING_SIZE + 1, stdin);
    lowercase2(line);
    printf("The lower cased string is: %s", line);
    return 0;
}