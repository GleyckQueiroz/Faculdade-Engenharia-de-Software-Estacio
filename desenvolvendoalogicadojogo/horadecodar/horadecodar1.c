#include <stdio.h>

int main(){

  float temperatura, umidade;

  unsigned int estoque, estoqueMin;

  estoqueMin = 1000;

  printf("Digite a temperatura: \n");
  scanf("%f", &temperatura);

  printf("Digite a umidade: \n");
  scanf("%f", &umidade);
  
  printf("Digite a quantidade em estoque: \n");
  scanf("%u", &estoque);

  if (temperatura > 30.0 )
  {
    printf("\n*** ALERTA ***\n");
    printf("A temperatura está muito alta\n");
    printf("******************************\n");
  }else{
    printf("\nA temperatura está dentros dos parâmetros\n");
  }
  
  if (umidade > 50.0)
  {
    printf("\n*** ALERTA ***\n");
    printf("Umidade elevada\n");
    printf("****************\n");
  }else{
    printf("\nA umidade está dentro dos parâmetros.\n");
  }
  
  if (estoque < estoqueMin)
  {
    printf("\n*** ALERTA ***\n");
    printf("Estoque abaixo do mímimo\n");
    printf("*************************\n");
  }else{
    printf("\nEstoque normal\n");
    
  }
  
  return 0;
}