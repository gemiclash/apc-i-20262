#include <stdio.h>

int main(){

int paises = 195;
short int idiomas = 7100;
long long int populacao_mundial = 8274065924LL;
long double proporcao_aurea = 1.61803398874989484820L;

printf("o numero de paises e: %.i\n", paises);
printf("o numero de idiomas e: %hd\n", idiomas);
printf("a populacao mundial:%lli\n",populacao_mundial);
printf("o valor da propocao aurea e: %.19Lf\n", proporcao_aurea);
printf("");
    return 0;
}