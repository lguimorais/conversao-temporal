#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

int segundos, horas, minutos, tempo;
int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("escreva o tempo em segundos:\n");
    scanf("%d", &segundos);
    horas = segundos / 3600;
    segundos = segundos - (3600 * horas);
    minutos = segundos / 60;
    segundos = segundos - (60 * minutos);
    printf("horas:%d\n", horas);
    printf("minutos:%d\n", minutos);
    printf("segundos:%d\n", segundos);
}