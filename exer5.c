/*Faça um programa que leia a quantidade de pessoas que o usuário deseja inserir para armazenar em um arquivo de texto essas informações.  usar struct e FILE. (2,0)*/

#include<stdio.h>

typedef struct Informacoes
{
    char nome[100];
    int idade;
    char sexo[2];

}Informacoes;


int main()
{
    FILE * file;
    file = fopen("dados.txt", "a");
    int qtd;
    Informacoes cadastro;

    printf("Qtd de pessoas que deseja inserir: ");
    scanf("%d", &qtd);


    for (int i = 0; i < qtd; i++)
    {
        printf("\nNome: ");
        scanf("%s", &cadastro[i].nome);
        printf("Idade: ");
        scanf("%d", &cadastro[i].idade);
        printf("Sexo (F ou M): ");
        scanf("%s", &cadastro[i].sexo);

    }

    for (int i = 0; i < qtd; i++)
    {
        fprintf(file, "\nNome: %s \t Idade: %d \t Sexo: %s \t ", cadastro[i].nome, cadastro[i].idade, cadastro[i].sexo);
    }
    
}