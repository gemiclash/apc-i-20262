#include <stdio.h> 
int main(){
     /*teoria dos conjuntos 
     uniao*/ 

    int A[] = {0,2,3,4,5};
    int B[] = {7,8,9,4,5};
    int tamA = 4;
    int tamB = 4;
    printf("uniao: ");
    for (int i =0; i < tamA; i++){
        printf("%d", A[i]);
    }

        for (int i =0; i < tamB; i++){
        printf("%d", B[i]);
    }
    printf("\n");

    
    
    return 0;

}