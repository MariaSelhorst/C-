/*Crie um programa que compare o valor absoluto de duas matrizes e imprima qual é a maior matriz. (2,0)*/

#include <stdio.h>

int main()
{
    int matriz1[3][3]= {{1,22,36}, {59,6,57},{6,46,85}};
    int matriz2[3][3] = {{56,4,52}, {7,88,54},{78,5,32}};
    int maior;
    int valorAbs;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            valorAbs = matriz1[i][j] + matriz1[i][j];
            printf(valorAbs);
        }
    

    }
}