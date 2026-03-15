#include <stdio.h>

int main(){

  int a = 5;
  int b = -10;
  int c  = 1;

  /*
  ************************        TABELA DE PRECEDÊNCIA:           ******************************************
  1.  () []	esquerda para a direita       |     6.  == !=	esquerda para a direita
  2.  ! - ++ --	direita para a esquerda   |     7.  &&	esquerda para a direita
  3.  * / %	esquerda para a direita       |     8.  ||	esquerda para a direita
  4.  + -	esquerda para a direita         |     9.  = += -= *= /= %=	direita para a esquerda
  5.  < <= > >=	esquerda para a direita   |     10. ,	esquerda para a direita
  */

  if (a > 0 && b < 0 || c == 0)
  {
    printf("A condição é verdadeira.\n");
  }else{
    printf("A condição é falsa.\n");
  }

  //  a > 0 => True
  //  b < 0 => True
  //  True && True => True
  //  True || c == 0
  //  True || False => True
  
  return 0;
}