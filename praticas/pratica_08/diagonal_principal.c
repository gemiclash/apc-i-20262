#include <stdio.h>

int main()
{
    int d[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("posicao [%d][%d]", i, j);
            scanf("%d", &d[i][j]);
        }
    }
    printf("diagonal principal;");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                printf("%d", d[i][j]);
            }
        }
    }
    printf("\n");

    return 0;
}