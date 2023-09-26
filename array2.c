#include<stdio.h>

int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    int *ptr = array;
    int maior = 0 ;

    for (int i = 0; i < 5; i++)
    {
        if (maior < (*ptr+i))
        {
            maior = (*ptr+i);
        }
        
    }
    
    printf("%i", maior);
}