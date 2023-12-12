#include <stdio.h>

int main() {
    float n1, n2, n3;

    printf("Digite 3 numeros(Ex:1  2  3):\n");
    scanf("%f %f %f", &n1, &n2, &n3);


    if (n1 == (n2 + n3))
    {
        printf("Esses numeros nao podem representar os 3 lados de um triangulo.");
    }
    else if (n1 < (n2 + n3) || n2 < (n1 + n3) || n3 < (n1 + n2))
    {
        printf("Esses numeros podem representar os 3 lados de um triangulo.");
    }

    return 0;
}
