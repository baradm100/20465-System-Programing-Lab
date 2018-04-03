#include <stdio.h>
#include <string.h>
#define MAX_STRING_SIZE 80

void use_getchar()
{
    char c;
    c = getchar();
    putchar(c);
}

char return_getchar()
{
    char c;
    c = getchar();
    return c;
}

void use_fgets()
{
    char line[MAX_STRING_SIZE + 1]; /* To save space for '\0' */
    fgets(line, MAX_STRING_SIZE + 1, stdin);

    printf("%s", line);
}

char *return_fgets()
{
    static char line[MAX_STRING_SIZE + 1]; /* To save space for '\0' */
    fgets(line, MAX_STRING_SIZE + 1, stdin);

    return line;
}

void use_scanf()
{
    char line[MAX_STRING_SIZE + 1];
    scanf("%80s", line);

    printf("%s", line);
}

int main()
{
    char c;
    char *line;

    printf("Running use_getchar():\n");
    use_getchar();
    printf("\n------------------- Done!\n");

    printf("Running return_getchar():\n");
    getchar(); /* To consume `\n` */
    c = return_getchar();
    putchar(c);
    printf("\n------------------- Done!\n");

    printf("Running use_fgets():\n");
    getchar(); /* To consume `\n` */
    use_fgets();
    printf("------------------- Done!\n");

    printf("Running return_fgets():\n");
    line = return_fgets();
    printf("%s", line);
    printf("------------------- Done!\n");

    printf("Running use_scanf():\n");
    use_scanf();
    printf("\n------------------- Done!\n");

    return 0;
}