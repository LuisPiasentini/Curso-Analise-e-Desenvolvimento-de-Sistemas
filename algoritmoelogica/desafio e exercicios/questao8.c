#include <stdio.h>

int main() {
    float primeiro_numero, segundo_numero;

    printf("Digite um numero:");
    scanf("%f", &primeiro_numero);

    printf("Digite outro numero:");
    scanf("%f", &segundo_numero);

    if (primeiro_numero > segundo_numero) printf("O numero %.2f eh o maior.", primeiro_numero);
    else if (primeiro_numero == segundo_numero) printf("Os numeros sao iguais.");
    else if (primeiro_numero < segundo_numero) printf("O numero %.2f eh o maior.", segundo_numero);

    return 0;
}
