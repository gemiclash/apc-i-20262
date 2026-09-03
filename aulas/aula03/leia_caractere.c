#include <stdio.h>
int main(){

printf("pressione uma letra entre 1 e 9 e dps enter\n");  

  char tecla;
  int numero;
  //leitura de valor
  scanf("%c", &tecla);
  scanf("%i", &numero);

  printf("voce informou a tecla %c\n", tecla);
  printf("vc coloco o numero%i", numero);

  float nota;

  printf("informe uma nota de 0 a 10");
  scanf("%f", &nota);
  printf("sua nota foi: %.1f\n", nota);

    return 0;
}