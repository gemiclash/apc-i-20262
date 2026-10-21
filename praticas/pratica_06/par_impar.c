#include <stdio.h>
int main()
{

    int n1;
    printf("escolha um numero inteiro:");
    scanf("%i", &n1);

    if (n1 % 2 == 0)
    {
        printf("o numero %d eh par\n", n1);
    }
    else
    {
        printf("o numero %d eh impar\n", n1);
    }

    return 0;
}