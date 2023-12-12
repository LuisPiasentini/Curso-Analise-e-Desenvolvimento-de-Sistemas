#include <stdio.h>

int main() {
    float distancia, minutos, velocidade, gasolina;

    printf("Digite quanto tempo durou a viajem(em minutos): ");
    scanf("%f", &minutos);

    printf("Digite sua velocidade media durante a viajem: ");
    scanf("%f", &velocidade);

    distancia = (minutos/60) * velocidade;
    gasolina = distancia / 12;

    printf("Voce percorreu %.2f km de distancia e gastou %.2f litros de gasolina", distancia, gasolina);

    return 0;
}
