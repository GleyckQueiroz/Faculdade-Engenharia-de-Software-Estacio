#include <stdio.h>

int main(){

  /*
    Atribuição Simples (=)
    Atribuição com Soma (+=)
    Atribuição com Subtração (-=)
    Atribuição com Multiplicação (*=)
    Atribuição com Divisão (/=)
  */
  
  int num1 = 10, num2 = 5, resultado=10;

  printf("Resultado = %d\n", resultado);

  resultado += 20; // resultado = resultado + 20
  printf("Resultado = %d\n", resultado);

  resultado -= num1; // resultado = resultado - num1
  printf("Resultado = %d\n", resultado);

  resultado *= num2; // resultado = resultado * num2
  printf("Resultado = %d\n", resultado);

  resultado /= num1; // resultado = resultado / num1
  printf("Resultado = %d\n", resultado);
  
  return 0;
}