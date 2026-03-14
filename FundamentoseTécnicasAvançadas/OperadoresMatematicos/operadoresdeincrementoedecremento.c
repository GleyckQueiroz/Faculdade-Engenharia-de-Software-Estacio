#include <stdio.h>

int main()
{

  /*
    Incremento (++)
    Pré-Incremento (++a)
    Pós-Incremento (a++)
    Decremento (--)
    Pré-Decremento --a
    Pós-Decremento a--
  */

  int num1 = 1, resultado, resultado2;

  printf("Antes Incremento: %d\n", num1);
  // num1++; // num1 += 1
  resultado = num1++;
  // printf("Após Incremento: %d\n", num1);
  printf("Após Pós - incremento - Número 1: %d - Resultado: %d\n", num1, resultado);

  //printf("Antes Decremento: %d\n", num1);
  // num1--; // num1 -= 1
  resultado2 = ++num1;
  printf("Após Pré - incremento - Número 1: %d - Resultado: %d\n", num1, resultado2);
  //printf("Após Decremento: %d\n", num1);

  resultado2 = num1--;
  printf("Após Pós - decremento - Número 1: %d - Resultado: %d\n", num1, resultado2);

  resultado2 = --num1;
  printf("Após Pré - Decremento - Número 1: %d - Resultado: %d\n", num1, resultado2);

  return 0;
}