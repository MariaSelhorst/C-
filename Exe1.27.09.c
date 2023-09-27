#include<stdio.h>

int exibir(int *ptr)
{
    for (int i = 0; i < 6; i++)
    {
        printf("\n%i", *(ptr + i));
    }
    
}

int main(){
    int array[6] = {1,4,7,9,8,65};
    int *ptr = array;

    exibir(ptr);
}