#include <stdio.h>

int main() {
    int idade;

    printf("Digite a sua idade:");
    scanf("%d", &idade);

    if (idade >= 18) printf("Voce se encaixa na categoria Senior.");
    else if (idade < 5) printf("Voce nao possui a idade minima para participar.");
    else if (idade >= 5 && idade <= 7) printf("Voce se encaixa na categoria Infantil A.");
    else if (idade > 7 && idade <= 10) printf("Voce se encaixa na categoria Infantil B.");
    else if (idade > 10 && idade <= 13) printf("Voce se encaixa na categoria Juvenil A.");
    else if (idade > 13 && idade <= 17) printf("Voce se encaixa na categoria Juvenil B.");

    return 0;
}
