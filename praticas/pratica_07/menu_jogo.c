#include <stdio.h>

int main()
{
    int menu;

    do
    {


        printf("===========================\n");
        printf(" *     jogo irado 2       *\n");
        printf("===========================\n");
        printf("|   o que deseja fazer    |\n");
        printf("---------------------------\n");
        printf("1>       novo jogo        <\n");
        printf("---------------------------\n");
        printf("2>       continuar        <\n");
        printf("---------------------------\n");
        printf("3>     ver pontuacao      <\n");
        printf("---------------------------\n");
        printf("4>         sair           <\n");
        printf("---------------------------\n");

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
     
    }while (menu < 1 || menu > 4); 
        
        return 0;
    }