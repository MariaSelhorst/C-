/*2. Leia duas matrizes 4 x 4 e escreva uma terceira com os maiores valores de cada posiçao das matrizes lidas.  */

#include <stdio.h>

int main()
{
    int matriz1[4][4]= {{1,2,3,4}, {5,6,7,8},{56,6,5,52},{96,95,45,51}};
    int matriz2[4][4] = {{56,4,52,5}, {77,88,54,45},{78,25,32,11},{4,21,22,77}};
    int matriz3[4][4];

    for (int i = 0; i < 4; i++)
    {
       
        for (int j = 0; j < 4; j++)
        {
            if(matriz1[i][j] >= matriz2[i][j])
            {
                matriz3[i][j] = matriz1[i][j];
                printf("%i, ", matriz3[i][j]);
            }
            else 
            {
                matriz3[i][j] = matriz2[i][j];
                printf("%i, ", matriz3[i][j]);
            }
              
           
        }
         printf("\n");
  

    }
}