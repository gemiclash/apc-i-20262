#include <stdio.h>

int main(){

int vetor[10];
int busca;
    int encontrado = 0; 

    printf("Digite 10 numeros inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("\nDigite o numero que deseja localizar: ");
    scanf("%d", &busca);

    for (int i = 0; i < 10; i++) {
        if (vetor[i] == busca) {
            printf("Numero %d encontrado no indice %d (posicao %d).\n", busca, i, i + 1);
            encontrado = 1;
            break;
        }
    }
    if (!encontrado) {
        printf("O numero %d nao esta no vetor.\n", busca);
    }




    return 0;
}