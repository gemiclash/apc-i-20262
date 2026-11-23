
#include <stdio.h>
#include <string.h>

int main()
{

    struct Produto
    {
        int id;
        char nome[50];
        char categoria[30];
        float preco;
        int estoque;
    };

    struct Produto produtos[10];

    int quantidade = 0;
    int opcao, idBusca;
    int i, j, encontrado;
    char entrada[100];
    char extra;

    while (1)
    {

        printf("\n========== SISTEMA DE CADASTRO ==========\n");
        printf("1 - Cadastrar produto\n");
        printf("2 - Listar produtos\n");
        printf("3 - Buscar produto\n");
        printf("4 - Atualizar produto\n");
        printf("5 - Remover produto\n");
        printf("0 - Sair\n");
        printf("=========================================\n");
        printf("Escolha uma opcao: ");

        if (fgets(entrada, sizeof(entrada), stdin) == NULL)
            break;

        if (sscanf(entrada, "%d %c", &opcao, &extra) != 1)
        {
            printf("Entrada invalida! Digite um numero.\n");
            continue;
        }

        switch (opcao)
        {

        // CADASTRAR PRODUTO
        case 1:

            if (quantidade >= 10)
            {
                printf("Limite de produtos atingido!\n");
                break;
            }

            printf("\nDigite o ID do produto: ");

            if (fgets(entrada, sizeof(entrada), stdin) == NULL)
                return 0;

            if (sscanf(entrada, "%d %c", &idBusca, &extra) != 1 || idBusca <= 0)
            {
                printf("ID invalido!\n");
                break;
            }

            encontrado = 0;

            for (i = 0; i < quantidade; i++)
            {
                if (produtos[i].id == idBusca)
                {
                    encontrado = 1;
                    break;
                }
            }

            if (encontrado)
            {
                printf("Este ID ja esta cadastrado!\n");
                break;
            }

            produtos[quantidade].id = idBusca;

            printf("Digite o nome do produto: ");
            if (fgets(produtos[quantidade].nome, 50, stdin) == NULL)
                return 0;

            produtos[quantidade].nome[strcspn(produtos[quantidade].nome, "\n")] = '\0';

            if (strlen(produtos[quantidade].nome) == 0 ||
                strspn(produtos[quantidade].nome, " \t\r") == strlen(produtos[quantidade].nome))
            {
                printf("Nome invalido!\n");
                break;
            }

            printf("Digite a categoria: ");
            if (fgets(produtos[quantidade].categoria, 30, stdin) == NULL)
                return 0;

            produtos[quantidade].categoria[strcspn(produtos[quantidade].categoria, "\n")] = '\0';

            if (strlen(produtos[quantidade].categoria) == 0 ||
                strspn(produtos[quantidade].categoria, " \t\r") == strlen(produtos[quantidade].categoria))
            {
                printf("Categoria invalida!\n");
                break;
            }

            printf("Digite o preco: ");
            if (fgets(entrada, sizeof(entrada), stdin) == NULL)
                return 0;

            if (sscanf(entrada, "%f %c", &produtos[quantidade].preco, &extra) != 1 ||
                produtos[quantidade].preco <= 0 || produtos[quantidade].preco > 10000000)
            {
                printf("Preco invalido!\n");
                break;
            }

            printf("Digite a quantidade em estoque: ");
            if (fgets(entrada, sizeof(entrada), stdin) == NULL)
                return 0;

            if (sscanf(entrada, "%d %c", &produtos[quantidade].estoque, &extra) != 1 ||
                produtos[quantidade].estoque < 0 || produtos[quantidade].estoque > 1000000)
            {
                printf("Quantidade invalida!\n");
                break;
            }

            quantidade++;

            printf("\nProduto cadastrado com sucesso!\n");

            break;

        // LISTAR PRODUTOS
        case 2:

            if (quantidade == 0)
            {
                printf("\nNenhum produto cadastrado!\n");
                break;
            }

            printf("\n========== LISTA DE PRODUTOS ==========\n");

            for (i = 0; i < quantidade; i++)
            {

                printf("\nID: %d\n", produtos[i].id);
                printf("Nome: %s\n", produtos[i].nome);
                printf("Categoria: %s\n", produtos[i].categoria);
                printf("Preco: R$ %.2f\n", produtos[i].preco);
                printf("Estoque: %d\n", produtos[i].estoque);
            }

            break;

        // BUSCAR PRODUTO
        case 3:

            if (quantidade == 0)
            {
                printf("\nNenhum produto cadastrado!\n");
                break;
            }

            printf("\nDigite o ID que deseja buscar: ");

            if (fgets(entrada, sizeof(entrada), stdin) == NULL)
                return 0;

            if (sscanf(entrada, "%d %c", &idBusca, &extra) != 1 || idBusca <= 0)
            {
                printf("ID invalido!\n");
                break;
            }

            encontrado = 0;

            for (i = 0; i < quantidade; i++)
            {

                if (produtos[i].id == idBusca)
                {

                    printf("\nProduto encontrado!\n");
                    printf("ID: %d\n", produtos[i].id);
                    printf("Nome: %s\n", produtos[i].nome);
                    printf("Categoria: %s\n", produtos[i].categoria);
                    printf("Preco: R$ %.2f\n", produtos[i].preco);
                    printf("Estoque: %d\n", produtos[i].estoque);

                    encontrado = 1;
                    break;
                }
            }

            if (!encontrado)
            {
                printf("Produto nao encontrado!\n");
            }

            break;

        // ATUALIZAR PRODUTO
        case 4:

            if (quantidade == 0)
            {
                printf("\nNenhum produto cadastrado!\n");
                break;
            }

            printf("\nDigite o ID do produto que deseja atualizar: ");

            if (fgets(entrada, sizeof(entrada), stdin) == NULL)
                return 0;

            if (sscanf(entrada, "%d %c", &idBusca, &extra) != 1 || idBusca <= 0)
            {
                printf("ID invalido!\n");
                break;
            }

            encontrado = 0;

            for (i = 0; i < quantidade; i++)
            {

                if (produtos[i].id == idBusca)
                {

                    printf("\nProduto encontrado!\n");

                    printf("Novo nome: ");
                    if (fgets(produtos[i].nome, 50, stdin) == NULL)
                        return 0;

                    produtos[i].nome[strcspn(produtos[i].nome, "\n")] = '\0';

                    if (strlen(produtos[i].nome) == 0 ||
                        strspn(produtos[i].nome, " \t\r") == strlen(produtos[i].nome))
                    {
                        printf("Nome invalido! Atualizacao cancelada.\n");
                        encontrado = 1;
                        break;
                    }

                    printf("Nova categoria: ");
                    if (fgets(produtos[i].categoria, 30, stdin) == NULL)
                        return 0;

                    produtos[i].categoria[strcspn(produtos[i].categoria, "\n")] = '\0';

                    if (strlen(produtos[i].categoria) == 0 ||
                        strspn(produtos[i].categoria, " \t\r") == strlen(produtos[i].categoria))
                    {
                        printf("Categoria invalida! Atualizacao cancelada.\n");
                        encontrado = 1;
                        break;
                    }

                    printf("Novo preco: ");
                    if (fgets(entrada, sizeof(entrada), stdin) == NULL)
                        return 0;

                    if (sscanf(entrada, "%f %c", &produtos[i].preco, &extra) != 1 ||
                        produtos[i].preco <= 0 || produtos[i].preco > 10000000)
                    {
                        printf("Preco invalido!\n");
                        encontrado = 1;
                        break;
                    }

                    printf("Nova quantidade em estoque: ");
                    if (fgets(entrada, sizeof(entrada), stdin) == NULL)
                        return 0;

                    if (sscanf(entrada, "%d %c", &produtos[i].estoque, &extra) != 1 ||
                        produtos[i].estoque < 0 || produtos[i].estoque > 1000000)
                    {
                        printf("Quantidade invalida!\n");
                        encontrado = 1;
                        break;
                    }

                    printf("\nProduto atualizado com sucesso!\n");

                    encontrado = 1;
                    break;
                }
            }

            if (!encontrado)
            {
                printf("Produto nao encontrado!\n");
            }

            break;

        // REMOVER PRODUTO
        case 5:

            if (quantidade == 0)
            {
                printf("\nNenhum produto cadastrado!\n");
                break;
            }

            printf("\nDigite o ID do produto que deseja remover: ");

            if (fgets(entrada, sizeof(entrada), stdin) == NULL)
                return 0;

            if (sscanf(entrada, "%d %c", &idBusca, &extra) != 1 || idBusca <= 0)
            {
                printf("ID invalido!\n");
                break;
            }

            encontrado = 0;

            for (i = 0; i < quantidade; i++)
            {

                if (produtos[i].id == idBusca)
                {

                    for (j = i; j < quantidade - 1; j++)
                    {
                        produtos[j] = produtos[j + 1];
                    }

                    quantidade--;

                    printf("\nProduto removido com sucesso!\n");

                    encontrado = 1;
                    break;
                }
            }

            if (!encontrado)
            {
                printf("Produto nao encontrado!\n");
            }

            break;

        // SAIR
        case 0:

            printf("\nEncerrando o sistema...\n");
            return 0;

        // OPCAO INVALIDA
        default:

            printf("\nOpcao inexistente! Tente novamente.\n");

            break;
        }
    }

    return 0;
}
