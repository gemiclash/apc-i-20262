#include <stdio.h>

int main(){

char letra;
int numero;
float nota;
double pi;
long int a;
long long b;
long double c;
short int d;


letra = 'b';
printf("tamanho de um  char: %zu bytes\n", sizeof(char));
printf("tamanho do short int:%zu bytes\n",sizeof(d));
printf("tamanho da variavel:%zu bytes\n",sizeof(numero));
printf("tamanho do long int:%zu bytes\n ",sizeof(a));
printf("tamanho da nota:%zu bytes\n",sizeof(nota));
printf("tamanho do pi e:%zu bytes\n",sizeof(pi));
printf("tamnho do ll:%zu bytes\n",sizeof(b));
printf("tamnho do long double:%zu bytes\n",sizeof(c));
printf("");
    return 0;
}