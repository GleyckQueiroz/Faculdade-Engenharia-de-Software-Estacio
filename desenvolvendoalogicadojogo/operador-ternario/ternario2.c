#include <stdio.h>

int main(){

  int a = 15, b = 17, soma = 50, maior;

  a > b ? (maior = a) : (maior = b);    // Se a maior que b variavel maior recebe a, senao, maior recebe b.

  soma = a > b ? soma + (a + b) : soma + (a - b);     
  //      Se a maior que b soma recebe soma mais a mais b, senao, soma recebe soma mais a menos b. 

  printf("A: %d\n", a);
  printf("B: %d\n", b);
  printf("Maior número: %d\n", maior);
  printf("Soma: %d\n", soma);

  return 0;
}