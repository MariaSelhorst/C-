/*2.Construa uma estrutura aluno com nome, numero de matrícula e curso.
Leia do usuário a informação de 5 alunos, armazene em vetor dessa
estrutura e imprima os dados na tela.*/

#include<stdio.h>

typedef struct Cadastro
{
    char nome[100];
    int matricula;
    char curso[100];

}Cadastro;


int main()
{
    Cadastro aluno[5];

    for (int i = 0; i < 5; i++)
    {
        printf("\nNome do aluno: ");
        scanf("%s", &aluno[i].nome);
        printf("Matricula: ");
        scanf("%d", &aluno[i].matricula);
        printf("Curso: ");
        scanf("%s", &aluno[i].curso);

    }

    for (int i = 0; i < 5; i++)
    {
        printf("\nNome: %s",aluno[i].nome);
        printf("\nMatricula: %d",aluno[i].matricula);
        printf("\nCurso: %s\n",aluno[i].curso);
    }
    
    
}