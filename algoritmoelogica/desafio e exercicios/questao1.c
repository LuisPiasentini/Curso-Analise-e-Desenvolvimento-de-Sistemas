#include <stdio.h>

int main() {
    float numero;

    printf("Digite um numero: \n");
    scanf("%f", &numero);

    if (numero > 20)
    {
        numero = numero/2;
        printf("a metade do numero digitado eh: %.2f\n", numero);
    }
    else
    {
        printf("numero digitado eh: %.2f", numero);
    }

    return 0;
}
