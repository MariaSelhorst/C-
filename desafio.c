/*1 - Aloque memória dinamicamente para ler um novo tipo de dados criado por você.
Você deverá ler veículos(Modelo, Fabricante ,Cor, Ano, Valor).
Quem decide a quantidade de veículos a serem lidos é o usuário do programa.
Insira em um arquivo de texto os veículos e mostre dentro do programa a lista inserida..*/

#include <stdio.h>
#include <stdlib.h>
typedef struct
    {
        char modelo[50];
        char fabricante[50];
        char cor[50];
        char ano[50];
        char valor[50];
    }Veiculo;


void aumentarTamanho(Veiculo * dados,int size)
{
    dados = (Veiculo*)realloc(dados, size * sizeof(Veiculo));
}

void inserirDados(Veiculo * dados, int *x, int size)
{
    FILE * file;
    file = fopen("dados.txt", "a");

    for (int i = *x; i < size; i++)
    {
        printf("\nQual o modelo do carro? ");
        scanf(" %[^\n]", dados[i].modelo);
        printf("\nQual o fabricante? ");
        scanf(" %[^\n]", dados[i].fabricante);
        printf("\nQual a cor? ");
        scanf(" %[^\n]", dados[i].cor);
        printf("\nQual o ano? ");
        scanf(" %[^\n]", dados[i].ano);
        printf("\nQual o valor do carro? ");
        scanf(" %[^\n]", dados[i].valor);
        fprintf(file, "\nModelo: %s \t Fabricante: %s \t Cor: %s \t Ano: %s \t Valor: %s", dados[i].modelo, dados[i].fabricante, dados[i].cor, dados[i].ano, dados[i].valor);

        *x = *x +1;

    }
    fclose(file);
}


void imprimirDados()
{
    FILE * file;
    file = fopen("dados.txt", "r");
    char * linha = (char*)malloc(1000* sizeof(char));

    while (fgets(linha, sizeof(linha),file) != NULL)
    {
        printf(" %s", linha);
    }
    fclose(file);
   
}


int main()
{
   
    int option = 5;
    int x = 0;
    int size = 0;

    printf("\nQual a quantidade de carros a serem inseridos? \n");
    scanf("%d", &size);
    Veiculo * dados = (Veiculo*)malloc(size*sizeof(Veiculo));

    while (option!=0)
    {
        printf("\nO que voce deseja fazer? ");
        printf("\n 0 - Parar \n 1 - Aumentar tamanho da lista \n 2 - Inserir dados \n 3 - Mostrar dados\n");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            printf("\nQual a quantidade de carros a serem inseridos? \n");
            scanf("%d", &size);

            aumentarTamanho(dados, size);
            break;
       
        case 2:
            inserirDados(dados, &x, size);
            break;
       
        case 3:
            imprimirDados();
            break;
       
        }

    }
       
    free(dados);

}