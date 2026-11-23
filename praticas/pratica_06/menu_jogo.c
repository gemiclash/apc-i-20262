#include <stdio.h>

int main()
{

    int menu;

    printf("===========================\n");
    printf(" *    epic conquest 2     *\n");
    printf("===========================\n");
    printf("|   o que deseja fazer    |\n");
    printf("1>       novo jogo        <\n");
    printf("2>       continuar        <\n");
    printf("3>     ver pontuacao      <\n");
    printf("4>         sair           <\n");

    scanf("%d", &menu);

    switch (menu)
    {
    case 1:
        printf("uma nova aventura comeca");
        break;
    case 2:
        printf("vamos la heroi");
        break;
    case 3:
        printf("sua pontuacao atua eh 15823");
        break;
    case 4:
        printf("ate logo");
        break;
    default:
        printf("opcao invalida");
    }

    return 0;
}