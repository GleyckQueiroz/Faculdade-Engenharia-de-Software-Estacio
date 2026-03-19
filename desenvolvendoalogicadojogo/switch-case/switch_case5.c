#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

  int opcao;
  int numeroSecreto, palpite;
  int regras;

  printf("Menu Principal\n");
  printf("1. Iniciar Jogo\n");
  printf("2. Ver Regras\n");
  printf("3. Sair\n");

  printf("Escolha: ");
  scanf("%d", &opcao);

  switch (opcao)
  {
  case 1:
    srand(time(0));
    numeroSecreto = rand() % 10;

    printf("Digite um numero de 0 a 9: ");
    scanf("%d", &palpite);

    if (palpite == numeroSecreto)
    {
      printf("\nVocê acertou!\n");
      printf("Número Secreto: %d\n", numeroSecreto);
    }else {
      printf("\nVocê errou!\n");
      printf("Número Secreto: %d\n", numeroSecreto);
    }
    
    break;
  
  case 2:
    printf("\nEscolha a regra que deseja aprender:\n");
    printf("\n1. Regra A\n");
    printf("2. Regra B\n");
    printf("3. Regra C\n");
    printf("Escolha: ");
    scanf("%d", &regras);

    switch (regras)
    {
    case 1:
      printf("Regra A\n");
      break;
    
    case 2:
      printf("Regra B\n");
      break;
    
    case 3:
      printf("Regra C\n");
      break;

    default:
      printf("\nEssa regra não existe\n");
      break;
    }

    break;
  
  case 3: 
    printf("Saindo do jogo\n");
    break;

  default:
    printf("Opção invalida!\n");
    break;
  }
  return 0;
}