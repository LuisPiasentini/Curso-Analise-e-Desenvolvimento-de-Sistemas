#include <stdio.h>

int main() {
    float valor_hora, desconto_inss, conta, resultado;
    //conta = 1% do que ele ganhou no dia. 250/2,5
    int qnt_aulas;

    printf("Digite o numero de aulas: \n");
    scanf("%d", &qnt_aulas);

    printf("Digite quantos reais vc recebe por hora: \n");
    scanf("%f", &valor_hora);

    printf("Digite o percentual de desconto do INSS: \n");
    scanf("%f", &desconto_inss);

    conta = (valor_hora * qnt_aulas)/100;
    resultado = valor_hora * qnt_aulas - conta * desconto_inss;

    printf("o salario liquido foi de: %.2f\n", resultado);

    return 0;
}
