#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

int segundos, horas, minutos, tempo;

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Solicita ao usuário o tempo em segundos
    printf("Escreva o tempo em segundos:\n");
    scanf("%d", &segundos);

    // Calcula as horas, minutos e segundos a partir do tempo em segundos
    horas = segundos / 3600; // Divide os segundos por 3600 para obter as horas
    segundos = segundos - (3600 * horas); // Remove as horas convertidas em segundos
    minutos = segundos / 60; // Divide os segundos restantes por 60 para obter os minutos
    segundos = segundos - (60 * minutos); // Remove os minutos convertidos em segundos

    // Exibe as horas, minutos e segundos na tela
    printf("Horas: %d\n", horas);
    printf("Minutos: %d\n", minutos);
    printf("Segundos: %d\n", segundos);

    return 0;
}
