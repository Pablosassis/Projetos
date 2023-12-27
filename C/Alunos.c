//BIBLIOTECAS
#include <stdio.h>
//VARIAVEIS
int escolha_inicio;
char nome_busca[100];
int i=0;
//ESTRUTURA
typedef struct
{
    char nome[200];
    char disciplina[100];
    float nota;
}Aluno;

Aluno alunos[5];
//DEFINICOES DE FUNCOES
void inicio();
void cadastro();
void consulta();
void editar();
void deletar();

//FUNÇÕES
void inicio(){
    printf("\nDigite o que quer fazer?\n 1.Cadastro\n 2.Consulta\n 3.Editar\n 4.deletar\n O que pretende fazer: ");
    scanf("%d%*c",escolha_inicio);
    fflush(stdin);
    switch (escolha_inicio)
    {
    case 1:
        cadastro();
        break;
    
    default:
        break;
    }
}
void cadastro(){
    int numCadastro;
    printf("\nQuantos voce quer cadastrar? ");
    scanf("%i%*c",numCadastro);
    fflush(stdin);
    if (numCadastro>0)
    {
        for (i = 0; i < 5; i++)
        {
        /* code */
        }
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