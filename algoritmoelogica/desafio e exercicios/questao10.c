#include <stdio.h>

int main() {
    float n1, n2, n3;

    printf("Digite um numero:");
    scanf("%f", &n1);

    printf("Digite outro numero:");
    scanf("%f", &n2);

    printf("Digite outro numero:");
    scanf("%f", &n3);

    if (n1 > n2 && n1 > n3) printf("Numero maior: %.2f", n1);
    else if (n2 > n1 && n2 > n3) printf("Numero maior: %.2f", n2);
    else if (n3 > n1 && n3 > n2) printf("Numero maior: %.2f", n3);

    return 0;
}
