#include <stdio.h>

int main()
{

    int n1;
    printf("informe um numero de 1 a 7");
    scanf("%d", &n1);

    switch (n1)
    {

    case 1:
        printf("eh domingo\n"); break;
    case 2:
        printf("eh segunda eh um dia util\n"); break;
    case 3:
        printf("eh terca eh um dia util\n"); break;
    case 4:
        printf("eh quarta eh um dia util\n"); break;
    case 5:
        printf("eh quinta eh um dia util\n"); break;
    case 6:
        printf("eh sexta eh um dia util \n"); break;
    case 7:
        printf("eh sabado\n"); break;
    default:
        printf("como vai ter mais de 7 dias na semana? tente denovo");
    }

    return 0;
}