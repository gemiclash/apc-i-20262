#include <stdio.h>

int main(){

int nota;
printf("de a nota de 1 a 5:0");
scanf("%i",&nota);
if (nota == 1){
    printf("ganhou *\n");
}else if (nota == 2){
    printf("ganhou **\n");
}else if (nota == 3){
    printf("ganhou ***\n");
}else if (nota == 4){
    printf("ganhou ****\n");
}else if (nota == 5){
    printf("ganhou *****\n");
}else {
    printf("nota invalida, de outra nota");
}



/*sintaxe swich*/
switch (nota){
    case 1: printf("ganhou *\n"); break;
    case 2: printf("ganhou **\n"); break;
    case 3: printf("ganhou ***\n"); break;
    case 4: printf("ganhou ****\n"); break;
    case 5: printf("ganhou *****\n");break;
    default: printf("nota invalida, tente de novo\n");
}
    return 0;
}