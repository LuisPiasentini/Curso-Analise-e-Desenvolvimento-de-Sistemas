#include <stdio.h>

int main( )
{
    float A, B;

    printf("digite um valor para A: \n");
    scanf("%f", &A);

    printf("digite um valor para B: \n");
    scanf("%f", &B);

    A = (B + 1) - 1;
    B = A - 1;

    printf("A = %f e B = %f", A, B);

    return 0;
}
