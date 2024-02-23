/* faça um programa em C para ler o horário (hora, minuto e segundo) de inicio e a 
duração, em segundos, de uma experiência biológica, em seguida informar o horário 
(hora, minuto e segundo) de termino da mesma */

#include <stdio.h>

int main() {
    int hora_ini, minuto_ini, segundo_ini;
    printf("Digite o valor em hora, minuto e segundo: ");
    scanf("%d %d %d", &hora_ini, &minuto_ini, &segundo_ini);

    int segundos;
    printf("Digite quantos segundos durou a experiência: ");
    scanf("%d", &segundos);

    int hora_fim, minuto_fim, segundo_fim;

    hora_fim = segundos / 3600;
    segundos %= 3600;

    minuto_fim = segundos / 60;
    segundos %= 60;

    segundo_fim = segundos;

    printf("%d:%d:%d\n", hora_fim, minuto_fim, segundo_fim);

    return 0;
}
