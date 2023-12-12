#include <stdio.h>

int main() {
    int n1, contador = 0;

    while (1){
        printf("Digite um numero: \n");
        scanf("%d", &n1);

        if (n1 >= 100 && n1 <= 200){
            contador++;
        }
        else if (n1 == 0){
            printf("a quantidade de numeros entre 100 e 200 foram: %d", contador);
            break;
        }

    }

    return 0;
}
