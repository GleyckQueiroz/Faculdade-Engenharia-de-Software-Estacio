#include <stdio.h>

int main(){

  /*
    TESTE COM O OPERADOR !(NOT)
    Descrição: o operador ! inverte o valor lógico de uma expressão. Se a expressão for verdadeira, 
    ele retorna falso, e se a expressão for falsa, ele retorna verdadeiro.
  */

  unsigned int a = 0;

  // TESTE 1

  if (!a)
  {
    printf("A variável é zero.\n");
  }else{
    printf("A variável é maior que zero.\n");
  }
  
  //TESTE 2

  if (!(a > 0))
  {
    printf("A variável é negativa");
  }else{
    printf("A variável é positiva");
  }
  
  return 0;
}