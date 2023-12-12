#include <stdio.h>

int main()
{
    float n1, n2;
    float resultado;

    printf("Digite o numerador da fracao:\n");
    scanf("%d", &n1);

    printf("Digite o denominador da fracao:\n");
    scanf("%d", &n2);

    resultado = n1 / n2;

    printf("O valor decimal dessa fracao eh: %.2f", resultado);

    return 0;
}
