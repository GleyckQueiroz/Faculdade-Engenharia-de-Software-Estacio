#include <stdio.h>

int main()
{

  int idade = 18;
  float altura = 1.80;
  double salario = 1967.86;
  char inicial = 'B';
  char nome[20] = "Bruna";

  printf("A idade de %s é: %d\n", nome, idade);
  printf("A altura é: %e metros\n", altura);
  printf("O salario é: %.2f reais\n", salario);
  printf("A inicial do nome é: %c\n", inicial);

  /*
    printf("%formato1, %formato2, formato3", variavel1, variavel2, variavel3);

    %d: Imprime um INTEIRO no formato decimal.
    %i: Equivale a %d.
    %f: Imprime um numero de ponto flutuante no formato padrão.
    %e: Imprime um numero de ponto flutuante na notação cientifica.
    %c: Imprime um unico caractere.
    %s: Imprime uma cadeia (String) de caracteres.
  */
  return 0;
}