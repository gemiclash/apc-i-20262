#include <stdio.h>

int main()
{
    int fat, n1, numero_original;

    do
    {
        printf("entre com um numero inteiro\n");
        scanf("%d", &n1);

        if (n1 <= 0)
        {
            printf("coloque um numero maior que 0 seu abestado\n\n");
        }
    } while (n1 <= 0);

    numero_original = n1;

    for (fat = 1; n1 > 1; n1 = n1 - 1)
    {
        fat = fat * n1;
    }
    printf("seu numero (%d) em fatorial eh: %d\n", numero_original, fat);

    return 0;
}
