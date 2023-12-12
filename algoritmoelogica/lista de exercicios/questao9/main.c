#include <stdio.h>

int main() {

    float n1, rendimento;

    printf("informe o saldo:\n");
    scanf("%f", &n1);

    rendimento = (n1 / 100) * 3.5 + n1;

    printf("o rendimento de 3,5%% sobre %f eh: %f", n1, rendimento);

    return 0;
}
