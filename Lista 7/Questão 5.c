#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
 
typedef struct Aluno
{
    int codigo;
    char nome[50];
    int sala;
} Aluno;
 
Aluno aluno_cadastro;
 
void menu();
void imprimir();
void cadastrar();
 
int main()
{
    menu();
    return 0;
}
 
void menu()
{
    int opcao;
    do
    {
        printf(" \n 1. Imprimir a ficha" );
        printf(" \n 2. Cadastrar Aluno" );
        printf(" \n 3. Para sair." );
        printf(" \n Digite a opcao desejada:");
        scanf("%d%*c", &opcao);
        switch(opcao)
        {
            case 1:
                imprimir();
            break;
            case 2:
                cadastrar();
            break;   
            default:
                 printf(" \n Opção não existente. ");
            break;
        }
    }
    while(opcao!=3);
}
 

void cadastrar()
{
    printf(" Digite o codigo do aluno:\n ");
    scanf("%d", &aluno_cadastro.codigo);
    printf(" Digite o nome do aluno:\n ");
    scanf("%s", &aluno_cadastro.nome);
    printf(" Digite a sala do aluno:\n ");
    scanf("%d", &aluno_cadastro.sala);
}
 
void imprimir()
{
    printf(" \n O codigo do aluno eh: %d ", aluno_cadastro.codigo);
    printf(" \n O nome do aluno eh: %s ", aluno_cadastro.nome);
    printf(" \n A sala do aluno eh: %d ", aluno_cadastro.sala);
    printf(" \n \n");
}
