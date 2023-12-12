#include <stdio.h>

int main() {
    int n1;

    while(1) {
        printf("Digite um numero inteiro: \n");
        scanf("%d", &n1);
        if (n1 == -999) {
            printf("Programa encerrado.");
            break;
        }
        printf("o triplo de %d eh: %d\n", n1, n1 * 3);

    }
    return 0;
}