#include <stdio.h>

int main() {
    float salario, credito, calculo, prestacoes, vezes;

    printf("Digite seu salario:");
    scanf("%f", &salario);
    printf("Digite o valor da linha de credito desejada:");
    scanf("%f", &credito);
    printf("Digite em quantas vezes:");
    scanf("%f", &vezes);

    calculo = salario * 0.3;
    prestacoes = credito / vezes;

    if (prestacoes > calculo) printf("\nInfelizmente voce nao pode ter acesso a essa linha de credito.");
    else printf("\nParabens! voce pode prosseguir com a linha de credito desejada.");
    return 0;
}
