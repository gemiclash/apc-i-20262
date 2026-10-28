#include <stdio.h>

int main(){
int numero;
printf("entre com um numero de 0 a 10\n");
scanf("%i",&numero);

printf("a tabuada de mutiplicacao %i\n", numero);
/*
comando for = repeticao contada

sintax for(contador; condicao; incremento){
faz_algo;
}
*/
for(int i = 1; i <=10; i++){
    printf("%i x %i = %i\n", i, numero, i * numero);

}

for(int i = 10; i >=1; i--){
    printf("%i x %i = %i\n", i, numero, i * numero);
}
    return 0;
}