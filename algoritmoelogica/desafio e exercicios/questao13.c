#include <stdio.h>

int main() {
    float n1, n2, n3, n4, n5, maior, menor;

    printf("Digite 5 numeros:\n");
    scanf("%f %f %f %f %f", &n1, &n2, &n3, &n4, &n5);

    if (n1 > n2 && n1 > n3 && n1 > n4 && n1 > n5)
    {
        maior = n1;
        if (n2 < n3 && n2 < n4 && n2 < n5)
        {
            menor = n2;
        } else if (n3 < n2 && n3 < n4 && n3 < n5)
        {
            menor = n3;
        } else if (n4 < n2 && n4 < n3 && n4 < n5)
        {
            menor = n4;
        }
        else menor = n5;
    }
    else if (n2 > n1 && n2 > n3 && n2 > n4 && n2 > n5)
    {
        maior = n2;
        if (n1 < n3 && n1 < n4 && n1 < n5)
        {
            menor = n1;
        } else if (n3 < n1 && n3 < n4 && n3 < n5)
        {
            menor = n3;
        } else if (n4 < n1 && n4 < n3 && n4 < n5)
        {
            menor = n4;
        }
        else menor = n5;
    }
    else if (n3 > n1 && n3 > n2 && n3 > n4 && n3 > n5)
    {
        maior = n3;
        if (n1 < n2 && n1 < n4 && n1 < n5)
        {
            menor = n1;
        } else if (n2 < n1 && n2 < n4 && n2 < n5)
        {
            menor = n2;
        } else if (n4 < n1 && n4 < n2 && n4 < n5)
        {
            menor = n4;
        }
        else menor = n5;
    }
    else if (n4 > n1 && n4 > n2 && n4 > n3 && n4 > n5)
    {
        maior = n4;
        if (n1 < n2 && n1 < n3 && n1 < n5)
        {
            menor = n1;
        } else if (n2 < n1 && n2 < n3 && n2 < n5)
        {
            menor = n2;
        } else if (n3 < n1 && n3 < n2 && n3 < n5)
        {
            menor = n3;
        }
        else menor = n5;
    }
    else if (n5 > n1 && n5 > n2 && n5 > n3 && n5 > n4)
    {
        maior = n5;
        if (n1 < n2 && n1 < n3 && n1 < n4)
        {
            menor = n1;
        } else if (n2 < n1 && n2 < n3 && n2 < n4)
        {
            menor = n2;
        } else if (n3 < n1 && n3 < n2 && n3 < n4)
        {
            menor = n3;
        }
        else menor = n4;
    }
    printf("maior: %.2f\nmenor: %.2f", maior, menor);
    return 0;
}
