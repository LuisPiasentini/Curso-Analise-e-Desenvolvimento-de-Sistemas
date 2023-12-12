#include <stdio.h>

int main() {
    float atl1, atl2, atl3, media;

    printf("Digite a pontuacao de cada um dos tres atletas (Ex:50  20  30):\n");
    scanf("%f %f %f", &atl1, &atl2, &atl3);

    media = (atl1 + atl2 + atl3) / 3;

    if (media > 100) printf("Parabens! A sua equipe foi classificada (A media foi %.2f).", media);
    else printf("Sua equipe nao foi classificada (A media foi %.2f).", media);

    return 0;
}
