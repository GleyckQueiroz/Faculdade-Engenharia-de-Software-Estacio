#include <stdio.h>

int main() {

  int x = 5;
  float y = 5.0;
  char c = 'z';

  printf("x >= y: %d\n", x>=y);
  printf("x == y: %d\n", x==y);
  printf("x != y: %d\n", x!=y);
  
  printf("x >= y: %d\n", x>=y);
  printf("O valor ASCII de %c é %d: \n", c, c);
  
  return 0;
}