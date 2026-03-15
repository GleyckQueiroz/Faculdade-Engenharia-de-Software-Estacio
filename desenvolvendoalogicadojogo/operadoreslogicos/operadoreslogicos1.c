#include <stdio.h>

int main(){

  /*

    TESTE COM O OPERADOR && (E)
    Descrição: O operador && (E) retorna verdadeiro se e somente se ambas as expressões que ele conecta 
    forem verdadeiras. Se qualquer uma das expressões for falsa, o resultado será falso.
  */

  int a = -10, b = 5;

  if (a > 0 && b > 0)
  {
    printf("Os dois números são positivos\n");
  }else{
    printf("Pelo menos um dos números é negativo\n");
  }

  /*
    TESTE COM O OPERADOR || (OU)
    Descrição: o operador || (OU) retorna verdadeiro se pelo menos uma das expressões que ele conecta for
    verdadeira. Se ambas as expressões forem falsas, o resultado será falso.
  */
  if (a > 0 || b > 0)
  {
    printf("Pelo menos um dos números é positivo");
  }else{
    printf("Os dois números são negativos");
  }
  
  return 0;
}