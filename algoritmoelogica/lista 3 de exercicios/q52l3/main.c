#include <stdio.h>

int main() {
    int inicial, final, incremento;

    printf("Digite o ponto inicial: ");
    scanf("%d", &inicial);

    printf("Digite o ponto final: ");
    scanf("%d", &final);

    printf("Digite o incremento: ");
    scanf("%d", &incremento);

    if (incremento <= 0) {
        printf("O Incremento deve ser maior que zero.\n");
    } else {
        int numero = inicial;
        while (numero <= final) {
            printf("%d ", numero);
            numero += incremento;
        }
        printf("\n");
    }

    return 0;
}