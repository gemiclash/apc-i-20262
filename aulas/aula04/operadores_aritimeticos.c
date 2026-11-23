#include <stdio.h>

int main (){

    int numero1;
    int numero2;

    printf("entre com um numero inteiro;");
    scanf("%i", &numero1);
    printf("entre com outro numero inteiro;");
    scanf("%i", &numero2);
//processamento
    int soma = numero1 + numero2;
    int diferenca = numero1 - numero2;
    int multiplicacao = numero1 * numero2;
    float divisao = (float)numero1 / numero2;
    //ou
    float divisao2 = numero1 * 1.0f / numero2;
    int expressao = numero1 * numero2 + numero1 / numero2 -numero1;
   int expressao2 = numero1 * (numero2 + numero1) / (numero2 -numero1);
   int resto = numero1 % numero2;

   int pre_incremento = numero1;
   int pos_incremento =numero1;
   int pre_decremento =numero1;
   int pos_decremento =numero1;

//em uma expressao com + - * / a preferencia eh * / e dps + -
// em uma expressao o () tem preferencia

    //saida
    printf("%i + %i = %i\n",numero1,numero2,soma);
    printf("%i - %i = %i\n",numero1,numero2,diferenca);
    printf("%i * %i = %i\n",numero1,numero2,multiplicacao);
    printf("%i / %i = %.2f\n",numero1,numero2,divisao);
    printf("%i * 1.0f / %i = %.2f\n",numero1,numero2,divisao);
    printf("%i * %i + %i / %i - %i = %i\n",numero1,numero2, numero1, numero2, numero1, expressao);   
    printf("%i * (%i + %i) / (%i - %i) = %i\n",numero1, numero2, numero1, numero2, numero1, expressao2);
    printf("%i %% %i = %i\n",numero1,numero2,resto);
    printf("%i++ =%i(depois do %i)\n", numero1, ++pre_incremento, pre_incremento);
    printf("++%i =%i\n",numero1, pre_incremento++);
    printf("--%i =%i\n",--pre_decremento);
    printf("%i-- =%i\n(dps %i)",pre_decremento--, pre_decremento);
    return 0;
}