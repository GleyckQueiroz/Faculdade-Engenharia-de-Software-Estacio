#include <stdio.h>

int main(){

  int variavel;

  printf("Digite um valor: ");
  scanf("%d", &variavel);

  switch (variavel) 
  {
  case 1:
    printf("Valor = 1");
    break;
  
  case 2: 
    printf("Valor = 2");
    break;

  default:
    printf("Valor diferente de 1 ou 2");
    break;
  }

  return 0;
}