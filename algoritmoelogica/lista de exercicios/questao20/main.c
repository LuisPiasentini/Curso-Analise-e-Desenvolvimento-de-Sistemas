#include <stdio.h>

int main() {
    float gorjeta;
    float conta_1;
    float conta_2;

    printf("Digite o valor da conta:\n");
    scanf("%f", &conta_1);

    gorjeta = conta_1 * 0.10;
    conta_2 = conta_1 + gorjeta;

    printf("Valor da conta: %.2f\n", conta_1);
    printf("Valor da gorjeta: %.2f\n", gorjeta);
    printf("Valor total da conta: %.2f", conta_2);
    return 0;
}
