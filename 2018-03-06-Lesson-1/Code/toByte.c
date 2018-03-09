#include <stdio.h>

int countDigits(int num) {
  int count = 0;
  while(num > 0) {
    count++;
    num /= 10;
  }

  return count;
}

int betterCountDigits(int n){
  int count = 0;
  if(n<0) n = -n;
  
  for(; n > 9; n /= 10)
    count++;
  
  return count;
}

int main() {
  printf("%d", betterCountDigits(16));
  return 0;
}
