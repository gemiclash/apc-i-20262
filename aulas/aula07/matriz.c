#include <stdio.h>

int main(){
        //  L  C    L=linha  C=coluna
float notas[5][4];

for(int i= 0; i < 5; i++){
    for (int j= 0; j < 4;j++){
        printf("informe o valor da nota[%i , %i]\n;",i , j);
        scanf("%f",&notas[i][j]);
    }
}
printf("as notas foram\n:\n%f\n");
for(int i= 0; i < 5; i++){
    for (int j= 0; j < 4;j++){
        printf("%5.1f", notas[i][j]);
        
    }
    printf("\n");
}
    return 0;
}