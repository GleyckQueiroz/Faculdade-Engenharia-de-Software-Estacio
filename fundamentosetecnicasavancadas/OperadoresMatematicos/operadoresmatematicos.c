#include <stdio.h>

int main(){

    /*
      Soma (+)
      Subtração (-)
      Multiplicação (*)
      Divisão (/)
    */
  
    //Declaração de variaves
  int numero1, numero2;
  int soma, subtracao, multiplicacao, divisao;

    //Entrada de dados
  printf("Digite dois números: \n");
  scanf("%d", &numero1);
  scanf("%d", &numero2);

    //Operação de soma
  soma = numero1 + numero2;

    //Operação de subtração
  subtracao = numero1 - numero2;

    //Operação de multiplicação
  multiplicacao = numero1 * numero2;

    //Operação de divisão
  divisao = numero1 / numero2;

    //Saída de dados
  printf("Soma = %d\n", soma);
  printf("Subtração = %d\n", subtracao);
  printf("Multiplicação = %d\n", multiplicacao);
  printf("Divisão = %d\n", divisao);

  return 0;
}