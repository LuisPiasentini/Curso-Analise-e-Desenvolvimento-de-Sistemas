#include <stdio.h>
#include <math.h>

int main() {
    double n1;

    printf("Digite um numero: ");
    scanf("%lf", &n1);

    while (n1 < 0) {
        printf("Digite um numero positivo: ");
        scanf("%lf", &n1);
    }

    double raizQuadrada = sqrt(n1);
    printf("A raiz quadrada de %.2lf eh %.2lf\n", n1, raizQuadrada);

    return 0;
}