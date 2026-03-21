#include <stdio.h>

int main() {

  int opcao, nota1, nota2;
  float media;

  printf("Menu de Gerenciamento de Estudantes\n");
  printf("1. Calcular Média\n");
  printf("2. Determinar Status\n");
  printf("3. Sair\n");
  printf("Escolha: ");
  scanf("%d", &opcao);

  switch (opcao)
  {
  case 1:
    printf("Calcular a Média\n");
    printf("Digite sua primeira nota: ");
    scanf("%d", &nota1);
    printf("Digite sua primeira nota: ");
    scanf("%d", &nota2);

    
    if ((nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <= 10)){
      media = (float) (nota1 + nota2) / 2;
      printf("Média = %.2f", media);
      printf("Execução correta\n");
    }else{
        printf("Entrada com valores invalidos!\n");
    }

    break;
    
  case 2: 

    printf("Determinar Status\n");
    printf("Entre com a média: ");
    scanf("%d", &media);

    media >= 5 ? printf("Aprovado!") : printf("Reprovado!");
    
    break;

  case 3: 

    printf("Sair do Programa\n");
    break;

  default:
    printf("Opção invalida!");
    break;
  }
  return 0;
}