#include <stdio.h>

int main(){

  int a = 10;
  float b = 3;
  float resultado = a / b; // 'a' è convertido implicitamente para float, podendo haver perda de dados
  float quociente = (float) a / b; // 'a' é convertido explicitamente para float

  printf("Resultado: %.2f\n", resultado);
  printf("Quociente: %.2f\n", quociente);
  
  return 0;
}