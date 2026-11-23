#include <stdio.h>
int main()
{

    int opcao;

    printf("+==========================+");
    printf("|       menu principal     |");
    printf("+==========================+");
    printf("| 1 consutar saldo");
    printf("| 2 fazer racarga");
    printf("| 3 ver ultimas mensagens");
    printf("| 4 ver ultimas ligaçoes");
    printf("| 5 sair do app");
    printf("+==========================+");
    printf("escolha uma opcao>");

    scanf("%i", &opcao);
    switch (opcao)
    {

    case 1:
        printf("seu saldo eh de ....\n");
        break;
    case 2:
        printf("informe o valor da recarga\n");
        break;
    case 3:
        printf("voce nao tem mensagem\n");
        break;
    case 4:
        printf("61 565685412, 61 5451298423\n");
        break;
    case 5:
        printf("adeus\n");
        break;
    default:
        printf("opcao invalida, tente dnovo\n");
    }
    return 0;
}