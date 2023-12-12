#include <stdio.h>

int main()
{
    float salario;
    float qw;
    float valor_conta;
    float valor_por_qw;
    float desconto;
    float conta_descontada;

    printf("Digite o salario: \n");
    scanf("%f", &salario);

    printf("Digite a quantidade de quilowatts: \n");
    scanf("%f", &qw);

    valor_conta = ((salario/7)/100)*qw;
    valor_por_qw = (salario/7)/100;
    desconto = (valor_conta/100)*10;
    conta_descontada = valor_conta-desconto;

    printf("O valor total da conta foi de: %.2f\nO valor da conta com 10%% de desconto foi de: %.2f\nO valor por quilowatt eh de: %.2f", valor_conta, conta_descontada, valor_por_qw);

    return 0;
}