#include <stdio.h>

int main() {
int numero, contador = 0;

    do {
        contador = contador + 1;
        printf("Digite um nuemero: ");
        scanf("%d", &numero);
        numero = numero * numero;
        printf("ao quadrado eh = %d\n", numero);
    } while (contador <= 4);
    return 0;
}
