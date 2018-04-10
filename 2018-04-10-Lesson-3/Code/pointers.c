#include <stdio.h>
#include <string.h>
#define END_OF_ARRAY -999

/* From Tzadok presentation */
float avgGrades(const int* grades) {
    int sum, count;

    /* Prevent dividing by 0 */
    if(*grades == END_OF_ARRAY)
        return 0;

    for(sum = 0, count = 0; *grades != END_OF_ARRAY; grades++, count++)
        sum += *grades;

    return (float)sum/count;
}

/* From Tzadok presentation */
void copy(char to[], char from[]) {
    int i;
    i = 0;

    while((to[i] = from[i]))
        i++;
}

/* By Bar */
void betterCopy(char *to, char *from) {
    for(;(*to = *from); to++, from++);
}

/* From Tzadok presentation */
void bestCopy(char *to, char *from) {
    while((*to++ = *from++));
}

/* From Tzadok presentation */
int comper(char *s, char *t) {
    int i;
    for(i = 0; s[i] == t[i]; i++)
        if(s[i] == '\0')
            return 0;

    return s[i] - t[i];
}

/* By Bar */
int whileComper(char *s, char *t) {
    while(*s && *t && *s++ == *t++);

    if(!*s)
        s--;
    if(!*t)
        t--;

    return *s - *t;
}

int betterComper(char *s, char *t) {
    for(; *s && *t && *s == *t; s++, t++);

    return *s - *t;
}

/* From Tzadok presentation */
int anotherComper(char *s, char *t) {
    for(; *s && (*s == *t); s++, t++);

    return *s - *t;
}

int main() {
    int arr[] = {100,50,-999};
    char a[] = "ABC";
    char c[] = "A";
    char b[4];

    /* Copy from a to b and change a */
    betterCopy(b,a);
    *a = 'Z';

    printf("Avg: %f\n", avgGrades(arr));
    printf("Copy: %s, Original: %s\n", b,a);

    printf("comper: %d\n", betterComper(c,b));
}
