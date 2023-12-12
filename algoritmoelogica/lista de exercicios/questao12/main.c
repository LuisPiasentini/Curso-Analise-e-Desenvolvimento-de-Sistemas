#include <stdio.h>

int main() {
    float calculo;
    float desconto;
    float valor;
    float resultado;

    printf("Digite o valor do produto: \n");
    scanf("%f", &valor);

    printf("Digite a porcentagem de desconto: \n");
    scanf("%f", &desconto);

    calculo = (valor/100)*desconto;
    resultado = valor-calculo;

    printf("O valor com desconto de %.2f%% eh: %.2f\n", desconto, resultado);

    return 0;
}
