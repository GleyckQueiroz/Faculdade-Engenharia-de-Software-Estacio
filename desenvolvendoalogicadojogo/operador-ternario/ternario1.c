#include <stdio.h>

int main(){

  int idade =  16, resultado;

  /*
    Operador Ternário

    Estrutura:

      Condição ? Se Verdadeira : Se Falsa;

    É o equivalente a: 

      if(Condição){
        Se Verdadeira;
      } else {
        Se Falsa;
      }
  */
  
  idade >= 18 ? printf("Maior de idade\n") : printf("Menor de idade\n");

  resultado = idade > 18 ? 18 : idade + (18-idade);

  printf("Resultado: %d\n", resultado);

  return 0;
}