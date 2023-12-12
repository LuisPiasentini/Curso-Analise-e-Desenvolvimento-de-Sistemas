#include <stdio.h>

int main() {
    int n1;
    int sucessor;
    int antecessor;

    printf("Digite um numero:\n");
    scanf("%d", &n1);

    sucessor = n1 + 1;
    antecessor = n1 - 1;

    printf("o numero que sucede %d eh %d e o numero que o antecede eh %d", n1, sucessor, antecessor);
    return 0;
}
