#include <stdio.h>

int main()
{

    int n1 = 0;

    
        printf("entre com um numero de 1 a 10:\n");
        scanf("%i", &n1);

    while (n1 < 1 || n1 > 10);

while (getchar() != '\n')
    ;

printf("a tabuada de mutiplicacao de %i\n", n1);
int i = 1;
do
{
    printf("numero invalido tente de novo\n");
    printf("entre com um numero de 1 a 10:\n");
    scanf("%i", &n1);
} while (i <= 10);
{
    printf(" %i x %i = %i\n", i, n1, i * n1);
    i++;
}

return 0;
}