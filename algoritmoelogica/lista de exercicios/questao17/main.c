#include <stdio.h>

int main() {
    float prestacao_valor, taxa, valor_final;
    int dias;

    printf("Digite o valor da prestacao: \n");
    scanf("%f", &prestacao_valor);

    printf("Digite qual a porcentagem da taxa por dia: \n");
    scanf("%f", &taxa);

    printf("Ja faz quantos dias que vc nao paga? \n");
    scanf("%d", &dias);

    valor_final = prestacao_valor + (prestacao_valor * taxa/100 * dias);

    printf("O valor a ser pago eh de: %.2f", valor_final);

    return 0;
}
