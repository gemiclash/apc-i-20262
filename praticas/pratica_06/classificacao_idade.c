// deixa o codigo bonito- ALT + SHIFT +F
#include <stdio.h>

int main()
{

    int n1;

    printf("informe sua idade:");
    scanf("%i", &n1);

    if (n1 <= 12)
    {
        printf("com %i vc eh uma crianca", n1);
    }
    else if (n1 > 13 && n1 <= 17)
    {
        printf("com %i vc eh um adolecente", n1);
    }
    else if (n1 > 18 && n1 <= 64)
    {
        printf("com %i vc eh um adulto", n1);
    }
    else
    {
        printf("com %i vc eh um idoso", n1);
    }

    return 0;
}