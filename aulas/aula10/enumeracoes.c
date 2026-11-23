#include <stdio.h>

int main()
{

    enum meses_e
    {

        jan = 1,
        fev,
        mar,
        abr,
        mai,
        jun,
        jul,
        ago,
        set,
        out,
        nov,
        dez
    };

    int mes;
    printf("informe o numero do mes:");
    scanf("%i", &mes);
    switch (mes)
    {
    case jan:
        printf("janeiro\n");
        break;
    case fev:
        printf("fevereiro\n");
        break;
    case mar:
        printf("marco\n");
        break;
    case abr:
        printf("abril\n");
        break;
    case mai:
        printf("maio\n");
        break;
    case jun:
        printf("junho\n");
        break;
    case jul:
        printf("julho\n");
        break;
    case ago:
        printf("agosto\n");
        break;
    case set:
        printf("setembro\n");
        break;
    case out:
        printf("outubro\n");
        break;
    case nov:
        printf("novembro\n");
        break;
    case dez:
        printf("dezembro\n");
        break;
    default:
        printf("tem quantos messes no ano?\n");
        break;
    }

    return 0;
}