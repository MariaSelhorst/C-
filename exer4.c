/*Faça um programa que leia n valores e armazene esses valores em um array[n]. Depois, multiplique todos esses valores.(2,0)*/

#include <stdio.h>

int main()
{
    int array[6] = {1,2,3,4,5,6}; /*não consegui fazer ele aceitar armazenar em array uma qtd x de valores passada pelo usuario em um array. :( */
    int *ptr = array;
    int mult = 1 ;
    
    for (int i = 0; i < 6; i++)
    {
        mult = mult * (*ptr + i);
        printf("%i", mult);
        printf("\n");
    }
    
}
