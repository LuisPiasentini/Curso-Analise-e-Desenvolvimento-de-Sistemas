#include <stdio.h>

int main() {
    int n1;
    long fatorial = 1;

    do {
        printf("Digite um numero: ");
        scanf("%d", &n1);

        if (n1 < 1) {
            printf("Programa encerrado.\n");
        } else {
            for (int i = 1; i <= n1; ++i) {
                fatorial *= i;
            }

            printf("O fatorial de %d eh %ld\n", n1, fatorial);
        }

    } while (n1 >= 1);

    return 0;
}