#include <stdio.h>

int main(){

  int numero;

  printf("Digite um número: ");
  scanf("%d", &numero);

  //Aplicação com o uso de estururas de decisão aninhadas  junto com estruturas encadeadas
  
  if(numero > 0){
    if(numero % 2 == 0){
      printf("O número é um valor positivo e par.\n");
    }else{
      printf("O número é um valor positivo e impar.\n");
    }
  }else if (numero == 0){
    printf("O número é zero");
  }else{
    if(numero % 2 == 0){
      printf("O número é um valor negativo e par.\n");
    }else{
      printf("O número é um valor negativo e impar.\n");
    }
  }

  return 0;
}