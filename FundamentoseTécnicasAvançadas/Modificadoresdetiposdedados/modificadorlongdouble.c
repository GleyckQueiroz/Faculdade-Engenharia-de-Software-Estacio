#include <stdio.h>

int main(){

  double numeroPreciso = 3.141592653589793;
  long double numeroMuitoPreciso = 3.141592653589793238463;
  //O código que funciona: 
  //double numeroMuitoPreciso = 3.141592653589793238463;

  printf("Número preciso(double): %.15f\n", numeroPreciso);
  printf("Número muito preciso(long double) %.21lf\n", numeroMuitoPreciso);
  //Para funcionar teria que alterar o %.21lf para %.21f
  return 0;
}