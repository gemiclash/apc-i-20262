#include <stdio.h>
#include<string.h>
int main()
{

    // struct agrupa variaveis
    struct endereco_t
    {

        char logradouro[31];
        int n1;
        char complemento[31];
        char bairo[31];
        char cidade[51];
        char uf[3];
        long int cep;
    };


struct endereco_t endereco;
endereco.n1 = 0;
printf("foneca seu endereco\n");
printf("logradouro");
scanf("%s",endereco.logradouro);

printf("numero");
scanf("%s",endereco.n1);

printf("complemento");
scanf("%s",endereco.complemento);

printf("bairo");
scanf("%s",endereco.bairo);


printf("cidade");
scanf("%s",endereco.cidade);


printf("uf");
scanf("%s",endereco.uf);

printf("cep");
scanf("%s",endereco.cep);



struct endereco_t outro;
outro = endereco;

printf("seu endereco\n");
printf("%s,%i,%s\n",outro.logradouro,outro.n1,outro.complemento);
printf("%s - %s/%s\n",outro.bairo,outro.cidade,outro.uf);
printf("%08li\n",outro.cep);




struct contato_t{

    char nome[61];
    long int telefone;
    struct endereco_t endereco;
    
}
struct contato_t contato;

strcpy(contato.nome,"jose");
contato.endereco.n1 = 612;
strcpy(contato.endereco.logradouro, "SQS");


struct contato_t contatos[10];




    return 0;
}