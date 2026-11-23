Sistema de Cadastro de Produtos

Sobre o projeto

Este projeto consiste em um sistema de cadastro de produtos desenvolvido em linguagem C, como atividade prática da disciplina de programação.

O objetivo é implementar as operações básicas de gerenciamento de registros (CRUD), permitindo cadastrar, consultar, atualizar e remover produtos por meio de um menu interativo.

Funcionalidades

O sistema possui as seguintes funcionalidades:

Cadastrar produto: permite inserir um novo produto, informando ID, nome, categoria, preço e quantidade em estoque.

Listar produtos: exibe todos os produtos cadastrados.

Buscar produto: localiza um produto por meio de seu identificador único (ID).

Atualizar produto: permite modificar as informações de um produto cadastrado.

Remover produto: exclui um produto do sistema.

Sair: encerra a execução do programa.

Tecnologias utilizadas

Linguagem C.

Compilador GCC.

Estrutura struct.

Vetores de estruturas.

Estruturas condicionais (if, else e switch).

Estruturas de repetição (while e for).

Estrutura dos dados

Cada produto possui os seguintes atributos:

Atributo

Tipo

Descrição

ID

int

Identificador único do produto

Nome

char[50]

Nome do produto

Categoria

char[30]

Categoria do produto

Preço

float

Valor do produto

Estoque

int

Quantidade disponível

O sistema utiliza um vetor de estruturas com capacidade máxima de 10 produtos e uma variável de controle para armazenar a quantidade atual de registros.

Validações

O programa realiza verificações para evitar:

Cadastro de produtos com IDs duplicados.

Inserção de valores inválidos.

Cadastro acima do limite de 10 produtos.

Busca de produtos inexistentes.

Atualização ou remoção de registros inexistentes.

Operações de consulta e gerenciamento quando não existem produtos cadastrados.

Seleção de opções inexistentes no menu.

Como executar o projeto

Pré-requisitos

É necessário possuir um compilador C, como o GCC, instalado no computador.

Compilação

Abra o terminal na pasta do projeto e execute:

gcc main.c -o cadastro

Execução

No Windows:

cadastro.exe

No Linux:

./cadastro

Organização do projeto

sistema-cadastro/
│
├── dados.c
└── Makefile
└── README.md

Objetivo acadêmico

O projeto tem como finalidade aplicar os conhecimentos adquiridos na disciplina, trabalhando conceitos fundamentais da linguagem C, como estruturas personalizadas, vetores, decisões, repetições, manipulação de dados e validação de entradas.

Integrantes

Integrante 1: [Nome do integrante]

Integrante 2: [Nome do integrante]

Status do projeto

Projeto acadêmico desenvolvido para fins de aprendizado e avaliação na disciplina de programação.