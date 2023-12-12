#include <stdio.h>

int main() {
    float primeiro_numero, segundo_numero;

    printf("Digite um numero:");
    scanf("%f", &primeiro_numero);

    printf("Digite outro numero:");
    scanf("%f", &segundo_numero);

    if (primeiro_numero == segundo_numero) printf("Os numeros sao iguais.");
    else if (primeiro_numero > segundo_numero) printf("ordem descrescente:\n %.2f \n %.2f", primeiro_numero, segundo_numero);
    else if (primeiro_numero < segundo_numero) printf("ordem descrescente:\n %.2f \n %.2f", segundo_numero, primeiro_numero);
    return 0;
}
