#include <stdio.h>

int main (){

    /*tipos de modificadores

    unsigned = sem sinal, char ou int
    singned = com sinal (+ ou -)

    short tamanho pequeno = inteiro curto

    long long tamanho grande = inteiro longo ou duplo longo
    
    */
long long inteiro = 10000000000000l;
long double duplo_longo= 5.465456468468454589585645;
    printf("numero bem longo =%lli \n", inteiro);
    printf("numero duplo longo =%llf", duplo_longo);
    return 0;
}