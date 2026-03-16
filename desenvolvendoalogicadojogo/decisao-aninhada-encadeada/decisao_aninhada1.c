#include <stdio.h>

int main(){

  unsigned int idade;
  float renda;  

  printf("Digite a sua idade: ");
  scanf("%u", &idade);

  printf("Digite a sua renda mensal: ");
  scanf("%f", &renda);

  if (idade <= 18 || idade >= 60)
  {
    if (renda < 2000)
    {
      printf("Você tem direito ao desconto");
    }else{
      printf("Você não tem direito ao desconto devido á renda!");
    }
  }else{
    printf("Você não atende aos critérios devido a idade");
  }
  

  return 0;
}