#include <stdio.h>

int main() {

    float pi = 3.14, raio, altura, resultado;

    printf("Digite a altura de uma lata: \n");
    scanf("%f", &altura);

    printf("Digite o raio da lata: \n");
    scanf("%f", &raio);

    resultado = pi * (raio*raio) * altura;

    printf("O volume da lata eh de: %.2f", resultado);

    return 0;
}
