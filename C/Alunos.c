//BIBLIOTECAS
#include <stdio.h>
//VARIAVEIS
int escolha_inicio;
char nome_busca[100];
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
    default:
        printf("erro");
    }
}
void cadastro(){
    
    printf("\nQuantos voce quer cadastrar? ");
    scanf("%d%*c",&numCadastro);
    fflush(stdin);
    if (numCadastro>0)
    {
        // for (i = 0; i < 5; i++)
        // {
        // printf("%d",i);
        // }
    }else if (numCadastro>5)
    {
        printf("\nLimite de 5 cadastros.");
    }
    else{
        printf("\nValor inválido.");
    }
}
void consulta(){
    
}
int main(){
    inicio();
}