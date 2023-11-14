/*Desenvolva uma função recursiva de soma. Esta função deve ir de número em número somando-os até chegar a um resultado.(2,0)*/

#include<stdio.h>

int Soma(int num){
    if (num == 0){
        return 0;
    }
    else{
        return num + Soma(num - 1);
    }
}

int main(){
    int num ;
    printf("Numero para ser somado: ");
    scanf("%i", &num);

    printf("A Soma e: %i ", Soma(num));
}