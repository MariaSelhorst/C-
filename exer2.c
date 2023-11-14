#include <stdio.h>

void Soma(int resultado, int num1, int num2)
{
  resultado = num1 + num2;
  printf("A soma e: %i",resultado);  
}

void Subtracao(int resultado, int num1, int num2)
{
    resultado = num1 - num2;
    printf("A subtracao e: %i",resultado);
}

void Multiplicacao(int resultado, int num1, int num2)
{
    resultado = num1 * num2;
    printf("A multiplicacao e: %i", resultado);
}

void Divisao(int resultado, int num1, int num2)
{
    resultado = num1 / num2;
    printf("A divisao e: %i", resultado);
}

int main()
{
    int op;
    int resultado, num1, num2;

    printf("Numero 1: ");
    scanf("%d", &num1);
    printf("Numero 2: ");
    scanf("%d", &num2);

    printf("#------CALCULADORA------#");
    printf("\n#------- 1. SOMA -------#");
    printf("\n#----- 2. SUBTRACAO ----#");
    printf("\n#--- 3. MULTIPLICACAO --#");
    printf("\n#------ 4. DIVISAO------#");
    printf("\nOperacao que deseja: ");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
        Soma(resultado, num1, num2);
        break;
    
    case 2:
        Subtracao(resultado, num1, num2);
        break;

    case 3:
        Multiplicacao(resultado, num1, num2);
        break;

    case 4:
        Divisao(resultado, num1, num2);
        break;
    }
}