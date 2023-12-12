#include <stdio.h>

int main() {

    float n1;
    float n2;
    float soma;
    float media;

    printf("escreva um numero real:\n");
    scanf("%f", &n1);

    printf("escreva outro numero real:\n");
    scanf("%f", &n2);

    soma = n1 + n2;
    media = soma / 2;

    printf("a media aritimetica de %f e %f eh %f\n", n1, n2, media);

    return 0;
}
