/*1. Escreva um trecho de codigo para fazer a criação dos novos tipos de dados conforme solicitado abaixo:
• Horário: composto de hora, minutos e segundos.
• Data: composto de dia, mês e ano.
• Compromisso: composto de uma data, horario e texto que descreve o compromisso.*/

#include<stdio.h>

typedef struct Horario
{
    int hora;
    int minutos;
    int segundos;
    int dia;
    int mes;
    int ano;
    char compromisso[100];

}Horario;

int main()
{
    Horario relogio;


    printf("\n---------------AGENDA---------------");
    printf("\nPreencha conforme seu compromisso.");
    printf("\n\nHora: ");
    scanf("%d", &relogio.hora);
    printf("Minutos: ");
    scanf("%d", &relogio.minutos);
    printf("Segundos: ");
    scanf("%d", &relogio.segundos);
    printf("Dia: ");
    scanf("%d", &relogio.dia);
    printf("Mes: ");
    scanf("%d", &relogio.mes);
    printf("Ano: ");
    scanf("%d", &relogio.ano);
    printf("Compromisso: ");
    scanf("%s", &relogio.compromisso);

    if (relogio.segundos > 59)
        {
            relogio.minutos++;
            relogio.segundos -= 60;
        }
        else if (relogio.minutos > 59)
        {
            relogio.hora++;
            relogio.minutos-=60;
        }
        else if (relogio.hora > 23)
        {
            relogio.hora = 0;
        }
    if (relogio.dia > 31)
        {
            printf("Dia invalido!");
        }
    if (relogio.mes > 12)
    {
        printf("Mes invalido!");
    }
    

    printf("\n\n---------------AGENDA---------------");
    printf("\n\n-  Hora: %d: ", relogio.hora);
    printf("%d: ", relogio.minutos);
    printf("%d", relogio.segundos);
    printf("\tDia: %d/", relogio.dia);
    printf("%d/", relogio.mes);
    printf("%d", relogio.ano);
    printf(" \tCompromisso: %s", relogio.compromisso);

}