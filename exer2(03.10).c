/*2 - Faça um programa que contenha um array de 10 posições. O usuário poderá selecionar duas posições para fazer algum dos cálculos básicos (soma, subtração, divisão, multiplicação) .*/

#include<stdio.h>

int main(){
    int array[10];
    char opcoes;
    int posicao1, posicao2;
    int resultado;


    for (int i = 0; i < 10; i++)
    {
        printf("Digite o valor:");
        scanf("%i", &array[i]);
    }
    
    for (int i = 0; i < 10; i++)
    {
        printf("%i ", array[i]);
    }

    printf("----------MENU----------");
    printf("-----1. ADICAO----------");
    printf("-----2. SUBTRACAO-------");
    printf("----3. MULTIPLICACAO----");
    printf("-----2. SUBTRACAO-------");

    scanf("%c", &opcoes);

    printf("Qual a primeira posicao?");
    scanf("%i", &posicao1);

    printf("Qual a segunda posicao?");
    scanf("%i", &posicao2);

    switch (opcoes)
    {
    case '+':
        resultado = posicao1 + posicao2;
        break;


    }
    
}