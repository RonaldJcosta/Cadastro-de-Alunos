#include <stdio.h>
#include <stdlib.h>

typedef struct TcadastroAluno
{
    int matricula;
    char nome[50];
    float nota1;
    float nota2;
    float nota3;

} cadastroAluno;

int cadastrarAluno(cadastroAluno aluno[100], int i);
void imprimirAluno(cadastroAluno aluno[100], int i);
void atualizarCadastro(cadastroAluno aluno[100], int i);
int excluirAluno(cadastroAluno aluno[100], int i);

int main()
{
    cadastroAluno aluno[100];
    int opcao, i = 1, tam = 0;

    do
    {
        printf("\t\t     *======================= MENU PRINCIPAL =========================*\n");
        printf("\t\t     |                                                                |\n");
        printf("\t\t     |                                                                |\n");
        printf("\t\t     |         1- Cadastrar aluno           2- imprimir Aluno         |\n");
        printf("\t\t     |                                                                |\n");
        printf("\t\t     |         3- Atualizar cadastro        4- Excluir cadastro       |\n");
        printf("\t\t     |                                                                |\n");
        printf("\t\t     |                                                                |\n");
        printf("\t\t     |                        5 - SAIR                                |\n");
        printf("\t\t     |                                                                |\n");
        printf("\t\t     |                                                                |\n");
        printf("\t\t     ==================================================================\n");
        scanf("%d", &opcao);

        switch(opcao)
        {
        case 1:
            i = cadastrarAluno(aluno, i);
            break;
        case 2:
            imprimirAluno(aluno, i);
            break;
        case 3:
            atualizarCadastro(aluno, i);
            break;
        case 4:
            i = excluirAluno(aluno, i);
            break;

        }



    }
    while(opcao != 5);

    return 0;
}


int cadastrarAluno(cadastroAluno aluno[100], int i)
{
    system("cls");
    int opcao;

    do
    {
        aluno[i].matricula = i;
        printf("\n Matricula: %d", aluno[i].matricula);

        printf("\n Digite o nome: ");
        fflush(stdin);
        gets(aluno[i].nome);

        printf(" Digite a primeira nota do aluno: ");
        scanf("%f", &aluno[i].nota1);

        printf(" Digite a segunda nota do aluno: ");
        scanf("%f", &aluno[i].nota2);

        printf(" Digite a terceira nota do aluno: ");
        scanf("%f", &aluno[i].nota3);

        printf("\n Deseja cadastrar mais um aluno?\n 1- sim \n 2- nao\n");
        scanf("%d", &opcao);
        i++;

        system("cls");

    }
    while(opcao == 1);



    system("pause");
    system("cls");
    return i;

}
void imprimirAluno(cadastroAluno aluno[100], int i)
{
    system("cls");
    int j = 1;

    while( j < i)
    {
        printf("\n Matricula: %d", aluno[j].matricula);
        printf("\n Nome: %s", aluno[j].nome);
        printf("\n Nota: %.2f", aluno[j].nota1);
        printf("\n Nota: %.2f", aluno[j].nota2);
        printf("\n NOta: %.2f", aluno[j].nota3);
        printf("\n");
        j++;

    }


    system("pause");
    system("cls");
}

void atualizarCadastro(cadastroAluno aluno[100], int i)
{
    system("cls");
    int opcao;

    printf("\nDigite a matricula do Aluno que deseja atualizar: ");
    scanf("%d", &i);
    do
    {
        printf("\t\t     *====================== MENU DE ATUALIZACAO =========================*\n");
        printf("\t\t     |                                                                    |\n");
        printf("\t\t     |                                                                    |\n");
        printf("\t\t     |       1- Atualizar nome             2- Atualizar a primeira nota   |\n");
        printf("\t\t     |                                                                    |\n");
        printf("\t\t     |       3- Atualizar a segunda nota   4- Atualizar a terceira nota   |\n");
        printf("\t\t     |                                                                    |\n");
        printf("\t\t     |                                                                    |\n");
        printf("\t\t     |                        5 - SAIR                                    |\n");
        printf("\t\t     |                                                                    |\n");
        printf("\t\t     |                                                                    |\n");
        printf("\t\t     ======================================================================\n");
        scanf("%d", &opcao);

        switch(opcao)
        {

        case 1:
            printf("\n Digite o nome: ");
            fflush(stdin);
            gets(aluno[i].nome);
            break;
        case 2:
            printf(" Digite a primeira nota do aluno: ");
            scanf("%f", &aluno[i].nota1);
            break;
        case 3:
            printf(" Digite a segunda nota do aluno: ");
            scanf("%f", &aluno[i].nota2);
            break;
        case 4:
            printf(" Digite a terceira nota do aluno: ");
            scanf("%f", &aluno[i].nota3);
            break;

        }

        printf("\nCadastro atualizado com sucesso!\n\n");

        system("pause");
        system("cls");

    } while(opcao != 5);

    system("cls");

}


int excluirAluno(cadastroAluno aluno[100], int i)
{
    int posicao;

    printf("Digite o numero da matricula que deseja excluir: ");
    scanf("%d", &posicao);


    for(int j = posicao; j < i - 1; j++)
    {

        aluno[j] = aluno[j + 1];
    }
    i--;

    printf("\n Cadastro excluido com sucesso.\n\n");
    system("pause");
    system("cls");

    return i;

}
