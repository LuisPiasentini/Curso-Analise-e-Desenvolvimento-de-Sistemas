#include <stdio.h>

int main() 
{
    float n1, n2, n3, maior, intermediario, menor;

    printf("Digite um numero:");
    scanf("%f", &n1);

    printf("Digite outro numero:");
    scanf("%f", &n2);

    printf("Digite outro numero:");
    scanf("%f", &n3);

    if (n1 < n2 && n1 < n3)
    {
        menor = n1;
        if (n2 < n3)
        {
            intermediario = n2;
            maior = n3;
        }
        else
        {
            intermediario = n3;
            maior = n2;
        }
    }
    else if (n2 < n1 && n2 < n3)
    {
        menor = n2;
        if (n1 < n3)
        {
            intermediario = n1;
            maior = n3;
        }
        else
        {
            intermediario = n3;
            maior = n1;
        }
    }
    else if (n3 < n1 && n3 < n2)
    {
        menor = n3;
        if (n1 < n2)
        {
            intermediario = n1;
            maior = n2;
        }
        else
        {
            intermediario = n2;
            maior = n1;
        }
    }
    printf("O menor numero eh: %.2f\nO numero intermediario eh: %.2f\nO maior numero eh: %.2f", menor, intermediario, maior);

    return 0;
}
