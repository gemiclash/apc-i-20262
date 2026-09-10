#include <stdio.h>
int main (){

char letra;
int numero;
float nota;
printf("entre com uma letra de  A-Z=\n");
scanf("%c", &letra);
while (getchar() !='\n');

printf("ente com um numero de 0-10=\n");
scanf("%i",&numero);
while (getchar() !='\n');

printf("entre com uma nota de 0.0 a 10.0=\n");
scanf("%f",&nota);
while (getchar() !='\n');
    return 0;
}