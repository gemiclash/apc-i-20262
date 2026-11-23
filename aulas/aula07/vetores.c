#include <stdio.h>

int main(){

int n1[10]; // [] = conjunto
int soma;

n1[0] = 8;
n1[1] =  5;
n1[2] =  6;
n1[3] =  1;
n1[4] =  2;
n1[5] =  3;
n1[6] =  4;
n1[7] =  9;
n1[8] =  10;
n1[9] =  7;

for (int i = 0; i < 10; i++){
    printf("entre com o %i numero:", i+1);
    scanf("%i",&n1[i]);
}


for (int i = 0; i < 10; i++) 
{
    soma = soma +n1[i];
    printf(" %d\n\n", n1[i]);
}
int media = soma / 10;

printf("a soma dos numeros eh %i\n", soma);
printf("a media dos numeros eh %i\n", media);





    return 0;
}