#include <stdio.h>

int main() {
    int numero, conta, numerodig;

    printf("Digite um numero: \n");
    scanf("%d", &numerodig);

    if (numerodig == 0)
    {
        printf("O numero eh nulo.");
    }
    else if (numerodig > 0)
    {
        printf("o numero eh positivo");
    }
   else
    {
    printf("o numero eh negativo");
    }

    return 0;
}
