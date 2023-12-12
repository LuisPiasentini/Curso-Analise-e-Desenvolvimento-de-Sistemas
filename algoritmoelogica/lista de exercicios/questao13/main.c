#include <stdio.h>

int main()
{
    int segundos, horas, minutos, resto_segundos, resto_minutos;

    printf("Digite a quantidade de segundos: \n");
    scanf("%d", &segundos);

    horas = segundos/3600;
    resto_minutos = segundos%3600;
    minutos = resto_minutos/60;
    resto_segundos = resto_minutos%60;


    printf("%d segundos equivalem a %d hora(s) %d minuto(s) %d segundo(s)", segundos, horas, minutos, resto_segundos);

    return 0;
}
