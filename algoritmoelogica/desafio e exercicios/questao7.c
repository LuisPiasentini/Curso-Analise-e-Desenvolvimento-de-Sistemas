#include <stdio.h>

int main() {
    float primeiro_numero, segundo_numero;

    printf("Digite um numero:");
    scanf("%f", &primeiro_numero);

    printf("Digite outro numero:");
    scanf("%f", &segundo_numero);

if (primeiro_numero == segundo_numero) printf("Os numeros sao iguais.");
else printf("Os numeros sao diferentes.");

    return 0;
}
