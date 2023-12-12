#include <stdio.h>

int main() {

    int n1;
    int n2;
    int soma;

    printf("escreva um numero inteiro:\n");
    scanf("%d", &n1);

    printf("escreva outro numero inteiro:\n");
    scanf("%d", &n2);

    soma = n1 + n2;

    printf("a soma dos dois numeros inteiros eh: %d", soma);

    return 0;
}
