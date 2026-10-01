#include <stdio.h>

int main(){

    int n1;
    int n2;
printf("entre com um numero inteiro:");
scanf("%i", &n1);
printf("entre com outro numero:");
scanf("%i",& n2);

if (n2 != 0){

    
    /*
    if (condica eh true){
        faz algo
        }
        */
       
       int divisao = n1 / n2;
       
       printf("%i / %i = %i\n", n1,n2,divisao);
    }else{
    printf("nao posso dividir por zero");
}

/*sintase completa
if (condiçao verdadeira){
}else{
faz outra coisa
}*/

return 0;

}