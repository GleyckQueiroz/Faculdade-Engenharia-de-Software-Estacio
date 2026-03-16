#include <stdio.h>

int main(){

  int opcao;
  float saldo = 2000, deposito, saque;
  char banco[50];
  unsigned int agencia, conta;
  
  printf("Escolha uma opção: \n");
  printf("1. Verificar saldo \n");
  printf("2. Fazer depósito \n");
  printf("3. Fazer saque \n");
  scanf("%d", &opcao);

  switch (opcao)
  {
  case 1:
    printf("O seu saldo é: R$ %.2f\n", saldo);
    break;
    
  case 2:
    printf("Informe o banco a se realizar o deposito: ");
    scanf("%s", banco);
    printf("Informe a agencia: ");
    scanf("%u", &agencia);
    printf("Informe a conta: ");
    scanf("%u", &conta);
    break;

  case 3:
    printf("Digite o valor a sacar: ");
    scanf("%f", &saque);
    break;
    
  default:
    printf("Operação invalida!");
    break;

  }
}