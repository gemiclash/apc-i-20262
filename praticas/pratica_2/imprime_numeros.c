#include <stdio.h>
int main() {

    printf("5\n");
    printf("%i\n",10 + 7);

    printf ("%.2f\n", 8.19);
    printf ("%.f\n", 8.19);
    printf("cpf = %lli\n",11111111111 );
    //preenche com espaço ate 11 digitos
    printf("cpf = %11i\n", 000000000001); 
    printf("cpf = %011i\n", 000000000001); 
    //preenche com 0 ate o 11 digitos

    printf("preco = R$ %7.2f\n ", 100.0);
    printf("preco = R$ %7.2f\n ", 10.0);
    printf("preco = R$ %7.2f\n ", 1000.0);

    return 0;
}