#include <stdio.h>

int main()
{
    int matriz[3][3]; 
    int maior = 0;
    int posicaol = 0;
    int posicaoc = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Valor para ser armazenado:");
            scanf("%i", &matriz[i][j]);
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matriz[i][j] > maior)
            {
                maior = matriz[i][j];
                posicaol = i;
                posicaoc = j;

            }
        }
        
    }
    printf("%i", maior);
    printf("\nO maior número esta na linha:%i e coluna: %i", posicaol, posicaoc);
}