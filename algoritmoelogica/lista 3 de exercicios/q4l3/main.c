#include <stdio.h>

int main() {
    int n1;

    for (n1 = 0; n1 <= 100; n1++)
    {
        if (n1 % 2 == 0)
            printf("Numero: %d \n", n1);
    }
    return 0;
}
