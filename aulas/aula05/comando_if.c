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

if (n1 < n2){
    printf("%i eh menor que %i\n",n1, n2);
}else if (n1 > n2){
    printf("%i eh maior que %i\n",n1, n2);
}else{
            printf("%i eh igual %i\n",n1, n2);
        }
    


/*
sintaxew encadeada do if
if(condicao eh verdadira){
faz_uma_coisa
}else if (condicao2 eh verdadeira){
faz_outra_coisa
}else{
faz outra coisa
}
*/



/*sintaxe alinhada do if
if (cindicao eh verdadeira){
if (condicao eh verdadeira){
faz algo
}
}
*/
if(n1 >= 16){
if(n1 < 18 || n1 > 70){
    printf("com %i anos pode votar\n",n1);
} else {
    printf("com %i anos deve votar\n",n1);
}
} else {
        printf("com %i anos naum pode votar\n",n1);
    }





    




/*sintase completa
if (condiçao verdadeira){
}else{
faz outra coisa
}*/

return 0;

}