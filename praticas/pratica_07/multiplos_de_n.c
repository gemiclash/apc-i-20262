#include <stdio.h>

int main()
{

    int n1;
    printf("entre com um inteiro:\n");
    scanf("%d", &n1);

    for (int i = 1; i <= 100; i++)
    {
        if (i % n1 == 0)
        {
            printf("%d \n", i);
        }
    }
    printf("\n");

    return 0;
}