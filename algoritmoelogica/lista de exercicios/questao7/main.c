#include <stdio.h>

int main() {

    float n1;
    float terca_parte;

    printf("digite um numero real:\n");
    scanf("%f", &n1);

    terca_parte = n1 / 3;

    printf("a terca parte de %f eh %f", n1, terca_parte);

    return 0;
}
