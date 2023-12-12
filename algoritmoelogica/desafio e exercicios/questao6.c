#include <stdio.h>

int main() {
    float numero;

    printf("Digite um numero:");
    scanf("%f", &numero);

    if (numero == 20) printf("O numero digitado eh igual a 20.");
    else if (numero > 20) printf("O numero digitado eh maior que 20.");
    else printf("O numero digitado eh menor que 20");

    return 0;
}
