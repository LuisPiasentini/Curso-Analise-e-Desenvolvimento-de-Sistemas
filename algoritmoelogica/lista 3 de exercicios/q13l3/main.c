#include <stdio.h>

int main() {
    int n1, total = 0, soma = 0, maior, menor;

    printf("Digite varios numeros (digite 0 para encerrar):\n");
    scanf("%d", &n1);
    maior = menor = n1;

    while (n1 != 0) {
        total++;
        soma += n1;

        if (n1 > maior) {
            maior = n1;
        }
        if (n1 < menor) {
            menor = n1;
        }

        printf("Digite varios numeros (digite 0 para encerrar):\n");
        scanf("%d", &n1);
    }

    if (total > 0) {
        double media = (double)soma / total;

        printf("\nResultados:\n");
        printf("Números digitados: %d\n", total);
        printf("Soma: %d\n", soma);
        printf("Média: %.2lf\n", media);
        printf("Maior número: %d\n", maior);
        printf("Menor número: %d\n", menor);
    } else {
        printf("\nNenhum número foi digitado.\n");
    }

    return 0;
}