#include <stdio.h>
#include <string.h>

void copy(char to[], char from[]) {
  int i = 0;
  
  while((to[i] = from[i]))
    ++i;
}

void betterCopy(char *to, char *from) {
  while((*to++ = *from++));
}

int getline(char *s, int lim) {
  int c;
  char *p = s, *end = s + lim - 1; /* saves a place to the '\0' */

  while((p<end) && ((c=getchar()) != EOF) && (c != '\n'))
    *p++ = c;
 
  *p = '\0';

  return p - s;
}

/* Returns the length of a string using array */
int badStrlen(char s[]) {
  int i;
  for(i = 0; s[i]; i++);

  return i;
}

/* Returns the length of a string using pointers and for loop */
int pointerStrlen(char* s) {
  char* p;
  for(p = s;*p;p++);
  
  return s - p;
}

/* Returns the length of a string using pointers and while */
int whilePointerStrlen(char* s) {
  char* p = s;
  while(++p);

  return s - p;
}

/* Returns a pointer for the rest of the string starting from the char c */
char* indexOf(char str[], char c) {
  int i;
  for(i = 0; i < strlen(str); i++) {
     if(str[i] == c)
        return &str[i];
  }

  return NULL;    
}


/* Better indexOf by Bar*/
char* newIndexOf(char str[], char c) {
  int i;
  for(i = 0; str[i]; i++) {
    if(str[i] == c)
	return &str[i];
  }

  return NULL;
}

/* A bit better indexOf by Bar */
char* newlyIndexOf(char str[], char c) {
  for(;str[0];str++) {
    if(str[0] == c)
	return str;
  }
  return NULL;
}

/* Gets a number using getchar, stops if the input makes the number invalid */
int getNumber() { 
  int n = 0, ch;  
  for(;(ch = getchar() - '0') && ch <= 9;) {
    n = 10 * n + ('0' - ch);
  }
  
  return 0;
}


int main() {
  char str[] = "Bar was here!";
  printf("%s", newIndexOf(str, 't'));

  return 0;
}

