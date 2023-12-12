#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero:");
    scanf("%d", &numero);

    if (numero % 3 == 0)
        printf("Esse numero eh multiplo de 3");
    else
        printf("Esse numero nao eh multiplo de 3");

    return 0;
}
