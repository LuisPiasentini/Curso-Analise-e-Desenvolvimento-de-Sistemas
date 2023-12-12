#include <stdio.h>

int main() {
    int maior, menor, contador = 1, n1 = 0;

    while (contador <= 10) {
        printf("Digite um numero: \n");
        scanf("%d", &n1);

        contador = contador + 1;

        if (n1 <= 1){
            menor = n1;
        }
        if (n1 >= 10){
            maior = n1;
        }
    }
    printf("maior: %d menor: %d", maior, menor);

    return 0;
}
