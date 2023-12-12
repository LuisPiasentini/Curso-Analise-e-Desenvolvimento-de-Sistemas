#include <stdio.h>

int main() {
    int idade, gotas, resultado;
    float peso;

    printf("Digite sua idade:");
    scanf("%d", &idade);

    printf("Digite seu peso:");
    scanf("%f", &peso);

    if (idade >= 12 && peso >= 60) resultado = 1000 * 20 / 500;

    else if (idade >= 12 && peso < 60) resultado = 875 * 20 / 500;

    else if (idade < 12 && peso >= 5 && peso <= 9) resultado = 125 * 20 / 500;

    else if (idade < 12 && peso >= 9.1 && peso <= 16) resultado = 250 * 20 / 500;

    else if (idade < 12 && peso >= 16.1 && peso <= 24) resultado = 375 * 20 / 500;

    else if (idade < 12 && peso >= 24.1 && peso <= 30) resultado = 500 * 20 / 500;

    else if (idade < 12 && peso >= 30) resultado = 750 * 20 / 500;

    printf("Voce deve tomar %d gotas(%dmg)", resultado, (resultado * 500 / 20));
    return 0;
}
