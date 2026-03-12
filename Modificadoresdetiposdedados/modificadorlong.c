#include <stdio.h>

int main(){

  int numeroNormal = 2147483647;
  long int numeroGrande = 2147483647;
  long long int numeroMuitoGrande = 2147483648;

  printf("Número normal: %d\n", numeroNormal);
  printf("Número Grande: %ld\n", numeroGrande);
  printf(" %lld\n", numeroMuitoGrande);

  numeroGrande = 2147483648; // Valor maior que o máximo de int
  printf("Número grande atualizado (Long int): %ld\n", numeroGrande);

  return 0;
}