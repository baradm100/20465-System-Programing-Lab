#include <stdio.h>

char* substr(char *str, int start, int end)
{
    str[end + 1] = '\0';
    return str + start;
}

int main() 
{
    char str[] = "Bar Admoni";
    
    printf("%s", substr(str, 2, 6));
}
