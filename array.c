#include <stdio.h>

int main()
{
    int array[6] = {1, 2, 3, 4, 5, 6};
    int *ptr = array;
    int soma = 0 ;

    for (int i = 0; i < 6; i++)
    {
        soma = soma + (*ptr + i);
        printf("%i", soma);
        printf("\n");
    }
    
}