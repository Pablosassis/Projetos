//BIBLIOTECAS
#include <stdio.h>
//VARIAVEIS
int escolha_inicio;
int cod_busca;
int i=0;
int numCadastro;
//ESTRUTURAS
typedef struct
{
    char nome[200];
    char disciplina[100];
    float nota;
    int CPF[11];
    int RG[10];
    int codigo_aluno;
}Aluno;

typedef struct
{
    char nome[200];
    char rua[100];
    int numero_rua;
    int CEP[8];
    Aluno dados_aluno[5];
}Endereco_aluno;

Endereco_aluno dados_endereco_aluno;

//DEFINICOES DE FUNCOES
int inicio();
void cadastro();
void consulta();
void editar();
void deletar();

//FUNÇÕES
int inicio(){
    printf("\nDigite o que quer fazer?\n 1.Cadastro\n 2.Consulta\n 3.Editar\n 4.deletar\n O que pretende fazer: ");
    scanf("%d%*c",&escolha_inicio);
    fflush(stdin);
    switch (escolha_inicio)
    {
    case 1:
        cadastro();
        break;
    case 2:
        consulta();
        break; 
    default:
        printf("erro");
    }
}
void cadastro(){
    printf("\nQuantos voce quer cadastrar? ");
    scanf("%d%*c",&numCadastro);
    fflush(stdin);
    if (numCadastro>0 && numCadastro<=5)
    {
        i=5-numCadastro;
        for (i = i; i < 5; i++)
        {
        printf("\nQual cod do aluno? ");
        scanf("%d",&dados_endereco_aluno.dados_aluno[i].codigo_aluno);
        fflush(stdin);
        printf("\nQual o nome do aluno? ");
        scanf("%s",&dados_endereco_aluno.dados_aluno[i].nome);
        fflush(stdin);
        }
    inicio();
    }else if (numCadastro>5)
    {
        printf("\nLimite de 5 cadastros.");
    }
    else{
        printf("\nValor invalido.");
    }
}
void consulta(){
    printf("\nQual codigo do aluno? ");
    scanf("%d%*c",&cod_busca);
    for (i = 0; i < 5; i++)
    {
        if(cod_busca==dados_endereco_aluno.dados_aluno[i].codigo_aluno){
            printf("%d ",dados_endereco_aluno.dados_aluno[i].codigo_aluno);
            printf("%s ",dados_endereco_aluno.dados_aluno[i].nome);
        }else{
            continue;
        }
    }
    
}
int main(){
    inicio();
}