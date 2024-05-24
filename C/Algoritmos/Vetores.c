#include <stdio.h>

int main()
{
    int notas[10];
    int soma = 0;
    int media = 0;
    int i;
    while (i<10)
    {
        printf("Nota do %d aluno: ", i);
        scanf("%d",&notas[i]);
        fflush(stdin);
        soma = soma + notas[i];
        i++;
    }
    media = soma/10;
    printf("%d",media);
    return 0;
}
