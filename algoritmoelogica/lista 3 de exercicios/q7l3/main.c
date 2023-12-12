#include <stdio.h>

int main() {
    int n;
    float h = 0.0;

    printf("Digite o numero de termos da serie: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; ++i) {
        h += 1.0 / i;
    }

    printf("O valor de H eh: %.2f\n", h);

    return 0;
}