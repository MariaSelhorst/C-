/*Leia uma matriz 5 x 10 que se refere respostas de 10 questões de múltipla escolha, referentes a 5 alunos.
Leia também um vetor de 10 posições contendo o gabarito de respostas que podem ser a, b, c ou d. Seu programa deverá comparar as respostas de cada candidato com o gabarito
e emitir um vetor denominado resultado, contendo a pontuação correspondente a cada aluno.*/

#include<stdio.h>

int main()
{
    char questao[5][10];
    char gabarito [10]; 
    int resultado[5];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("Qual a resposta do aluno %i ? ", i+1);
            scanf("%s", &questao[i][j]);
        }
        
    }

    for (int i = 0; i < 10; i++)
    {
        printf("O gabarito e: ");
        scanf("%s", &gabarito[i]);
    }
    
    for (int i = 0; i < 10; i++)
    {
        int acertos = 0;
        for (int j = 0; j < 5; j++)
        {
            if (questao[i][j] == gabarito[j])
            {
                acertos++;
            }
            
            resultado[i] = acertos;
        }
        
    }
    for (int i = 0; i < 5; i++)
    {
        printf("\nA nota do aluno %i e %i.", i+1, resultado[i]);
    }
    
}


