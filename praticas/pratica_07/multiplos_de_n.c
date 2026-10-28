#include <stdio.h>

int main(){

    int n1;
printf("entre com um inteiro:\n");
scanf("%d",&n1);

for(int i = 1; i <=100; i++){
    printf("%i / %i = %i\n", i, n1, i / n1);
}



    return 0;
}