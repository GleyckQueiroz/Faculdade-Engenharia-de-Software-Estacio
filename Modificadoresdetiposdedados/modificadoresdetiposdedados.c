#include <stdio.h>

int main(){

  int numSinal = 3000000000; //Este valor execede o limite de um int normal
  unsigned int numSemSinal = 3000000000;

  printf("Número com sinal: %d\n", numSinal);
  printf("Número sem sinal: %u\n", numSemSinal);

  return 0;
}