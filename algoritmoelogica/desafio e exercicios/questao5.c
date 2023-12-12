#include <stdio.h>

int main() {
    int numero, calculo;

    printf("Digite um numero com 3 digitos (Exemplo: 154)\n:");
    scanf("%d", &numero);

    calculo = numero / 100;

    if (calculo % 2 == 0) printf("O algarismo da casa das centenas eh par.");
    else printf("O algarismo da casa das centenas nao eh par");

    return 0;
}
