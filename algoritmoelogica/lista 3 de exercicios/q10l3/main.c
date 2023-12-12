#include <stdio.h>

int main() {
    float altZerg = 1.5, altSplim = 1.3;
    int contadorAnos = 0;

    while (altSplim < altZerg){
    altZerg = altZerg + 0.02;
    altSplim = altSplim + 0.03;
    contadorAnos++;
    }
    printf("Splim sera maior que Zerg em: %d anos", contadorAnos);
    return 0;
}
