#include <stdio.h>

int main()
{
    float raio;
    float pi = 3.14;
    float perimetro;
    float area;

    printf("Digite o raio do circulo:\n");
    scanf("%f", &raio);

    perimetro = 2 * pi * raio, area = pi * (raio * raio);

    printf("o perimetro eh %f e o raio eh %f", perimetro, area);

    return 0;
}
