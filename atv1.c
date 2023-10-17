/*1 - Aloque memória dinamicamente para ler um novo tipo de dados criado por você. Você deverá ler veículos(Modelo, Fabricante ,Cor, Ano, Valor). 
Quem decide a quantidade de veículos a serem lidos é o usuário do programa.
Insira em um arquivo de texto os veículos e mostre dentro do programa a lista inserida.*/

#include<stdio.h>
#include<stdlib.h>

typedef struct veiculo
{
    char modelo[100];
    char fabricante[100];
    char cor[20];
    int ano;
    int valor;
}veiculo;


int main()
{
    int qntd;

    FILE * arquivo;

    arquivo = fopen("veiculos.txt", "a");

    printf("Quantidade de carros para serem lidos: ");
    scanf("%d", &qntd);

    veiculo *cadastro = malloc(qntd * sizeof(veiculo));

    for (int i = 0; i < qntd; i++)
    {
        printf("Veiculo %i", i+1);
        printf("\nModelo: ");
        scanf("%s", cadastro[i].modelo);
        printf("Fabricante: ");
        scanf("%s", cadastro[i].fabricante);
        printf("Cor:");
        scanf("%s", cadastro[i].cor);
        printf("Ano: ");
        scanf("%d", &cadastro[i].ano);
        printf("Valor: ");
        scanf("%d", &cadastro[i].valor);

        fprintf(arquivo, "Modelo: %s, Fabricante: %s, Cor: %s, Ano: %d, Valor: %d\n", cadastro[i].modelo,cadastro[i].fabricante,cadastro[i].cor,cadastro[i].ano,cadastro[i].valor);
    }
    
}