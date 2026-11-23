#include <stdio.h>

int main (){

    int numero1;
    

    printf("entre com um numero inteiro de 1 a 10:");
    scanf("%i", &numero1);

    int numero_maior_que_zero =numero1 > 0;
    int numero_menor_que_onze =numero1 < 11;
    int numero_maior_que_0_e_menor_que_11 =numero_maior_que_zero && numero_menor_que_onze;
    int numero_maior_que_zero_ou_menor_que_onze =numero_maior_que_zero || numero_menor_que_onze;
    int nao_e_numero_maior_que_zero = numero_maior_que_zero;


print("0 < %i <11 =");
print("");
print("");
    return 0;
}