#include <stdio.h>

int main()
{

  unsigned int idade = 5;

  if (idade > 18)
  {
    printf("Você é maior de idade");
    printf("Dentro do if\n");
  }

  printf("Fora do if\n");

  return 0;
}