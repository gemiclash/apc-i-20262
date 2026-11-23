#include <stdio.h>

int main()
{

    float notas[10][3];

    for (int i = 0; i < 10; i++)
    {
        printf("aluno %d\n", i + 1);
        for (int j = 0; j < 2; j++)
        {
            printf("digite sua nota %d\n", j + 1);
            scanf("%f", &notas[i][j]);
        }
        notas[i][2] = (notas[i][0] + notas[i][1] / 2);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("aluno %d, %.1f , %.1f = %.1f\n", i + 1, notas[i][0], notas[i][1], notas[i][2]);
    }

    return 0;
}