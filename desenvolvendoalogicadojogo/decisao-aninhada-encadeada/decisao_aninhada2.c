#include <stdio.h>

int main(){

  unsigned int idade, dependentes;
  float renda;
  
  printf("Digite sua idade: ");
  scanf("%u", &idade);
  printf("Digite a sua renda mensal: ");
  scanf("%f", &renda);
  printf("Digite o número de dependentes: ");
  scanf("%u", &dependentes);

  if (idade >= 18 && idade < 65)
  {
    if (renda < 3000)
    {
      if (dependentes > 2)
      {
        printf("Você atende a todos os critérios");
      }else{
        printf("Você não atende ao critério de dependentes");
      }
    }else{
      printf("Você não atende ao criterio renda");
    }
    
  }
  
  return 0;
}