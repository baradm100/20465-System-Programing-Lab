#include <stdio.h>
#include <string.h>

int main() {
  char s[] = "Bar";
  printf("This is the test file!");
  /* Moving the string "Bar" to "ar"  */
  memmove(s, s+1, 3);
  printf("%s", s);
  return 0;
}
