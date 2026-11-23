#include <stdio.h>

int main (){

    int numero1;
    int numero2;

    printf("entre com um numero inteiro;");
    scanf("%i", &numero1);
    printf("entre com outro numero inteiro;");
    scanf("%i", &numero2);
int maior_que = numero1 > numero2;
int maior_igual = numero1 >= numero2;
int menor = numero1 < numero2;
int menor_igual = numero1 <= numero2;
int igual_a = numero1 == numero2;
int diferente_de = numero1 != numero2;

 printf("%i > %i\n", numero1, numero2, maior_que);
 printf("%i >= %i = %i\n", numero1, numero2, maior_igual);
 printf("%i < %i =%i\n", numero1, numero2, menor);
 printf("%i <= %i =%i\n", numero1,numero2,igual_a );
 printf("%i == %i = %i\n", numero1, numero2, igual_a);
 printf("%i ! %i = %i\n", numero1, numero2, diferente_de);

    return 0;
}