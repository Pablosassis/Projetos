#include <stdio.h>
//registro
struct
{
    char nome[100];
    int nota1[100];
    float nota2;
    float nota3;
    float nota4;
}Aluno;
//contador
int i=0;

int main(){
    while(i<10){
        printf("nome do aluno: ");
        fflush(stdin);
        fgets(Aluno.nome,100,stdin);
        printf("nota1: ");
        fflush(stdin);
        scanf("%d",&Aluno.nota1[i]);
        printf("%s, %d\n",Aluno.nome,Aluno.nota1[i]);
        i++;
    }
}