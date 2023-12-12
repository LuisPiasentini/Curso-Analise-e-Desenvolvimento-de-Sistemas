#include <stdio.h>
#include <math.h>

int main() {
    double a,b,c;
    double eq_posi, eq_nega;

    printf("Digite 3 numeros (Ex:10  15  20):\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    eq_posi = ((-b + sqrt((b*b) -4 * a * c)) /2 * a);
    eq_nega = ((-b - sqrt((b*b) -4 * a * c)) /2 * a);

    printf("Resultado com delta positivo: %lf\n", eq_posi);
    printf("Resultado com delta negativo: %lf\n", eq_nega);

    return 0;
}
