#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

  int escolhaJogador, escolhaComputador;
  srand(time(0));

  printf("Jogo de Jokenpo\n");
  printf("Escolha uma opção: \n");
  printf("1. Pedra\n");
  printf("2. Papel\n");
  printf("3. Tesoura\n");

  printf("\nEscolha: ");
  scanf("%d", &escolhaJogador);
  printf("\n");

  escolhaComputador = rand() % 3 + 1;

  switch (escolhaJogador)
  {
  case 1:
    printf("Jogador = Pedra X ");
    break;
    
  case 2:
    printf("Jogador = Papel X ");
    break;
    
  case 3: 
    printf("Jogador = Tesoura X ");
    break;

  default:
    printf("Opção invalida!\n");
    break;
  }

  switch (escolhaComputador)
  {
  case 1:
    printf("Pedra = Computador\n");
    break;
    
  case 2:
    printf("Papel = Computador\n");
    break;
    
  case 3: 
    printf("Tesoura = Computador\n");
    break;
  }

  if (escolhaJogador == escolhaComputador)
  {
    printf("\n### Empate! ###\n");
  }else if ((escolhaJogador == 1) && (escolhaComputador == 3) || 
            (escolhaJogador == 2) && (escolhaComputador == 1) || 
            (escolhaJogador == 3) && (escolhaComputador == 2))
  {
    printf("\n### Vitoria do Jogador! ### \n");
  }else if ((escolhaJogador == 1) && (escolhaComputador == 2) || 
            (escolhaJogador == 2) && (escolhaComputador == 3) || 
            (escolhaJogador == 3) && (escolhaComputador == 1))
  {
    printf("\n### Você Perdeu! ### \n");
  }
  

  return 0;
}
