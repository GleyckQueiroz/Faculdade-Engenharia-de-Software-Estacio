#include <stdio.h>

int main(){

  float nota1, nota2, nota3;
  float media;

  printf("*** Programa de calculo de Media ***\n");

  printf("Digite a sua primeira nota: \n");
  scanf("%f", &nota1);

  printf("Digite a sua segunda nota: \n");
  scanf("%f", &nota2);
  
  printf("Digite a sua terceira nota: \n");
  scanf("%f", &nota3);
  
  media = (nota1 + nota2 + nota3) / 3; 
  /* 
    Caso as variaveis fossem tipo Int: 
    media = (float) (nota1+nota2+nota3)/3;
    Para evitar a perda de dados ao exibir a media
  */
  printf("A média é: %.1f \n", media);

  return 0;
}