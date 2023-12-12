#include <stdio.h>

int main() {
    float n1, n2, n3, media;

    printf("Digite suas notas (Ex:10  5  6 )\n:");
    scanf("%f %f %f", &n1, &n2, &n3);

    media = (n1 + n2 + n3) / 3;

    if (media >= 7) printf("Voce foi aprovado(Media: %.2f).", media);
    else printf("Voce foi reprovado (Media: %.2f).", media);

    return 0;
}
