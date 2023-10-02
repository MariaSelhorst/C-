/*Leia uma matriz de 3 x 3 elementos. Faça a inversão dos valores armazenados nessa matriz*/

#include<stdio.h>

int main()
{
    int matriz[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int matriz_inversa[3][3];
    int n = 2, k = 2;

    for (int i = 0; i < 3; i++)
    {   
        for (int j = 0; j < 3; j++)
        {
            matriz_inversa[i][j] = matriz[n][k];
            printf("%d ", matriz_inversa[i][j]);
            k--;
        }
        n--;
        k=2;
        printf("\n");
    }
    
}