#include <stdio.h>

int main(void)
{

    char produtos[3][20] = {"Camiseta", "Calca", "Meia Social"};

    int quantidade[3];
    quantidade[0] = 2;
    quantidade[1] = 1;
    quantidade[2] = 3;

    float valor[4];
    valor[0] = 39.99;
    valor[1] = 89.90;
    valor[2] = 19.99;
    valor[3] = valor[0] + valor[1] + valor[3];

    printf("==============================\n");
    printf("      N O T A    L E G A L\n");
    printf("==============================\n");
    printf("Produto         Qtd Valor Unit\n");
    printf("%s        %.3i      %.2f\n", produtos[0], quantidade[0], valor[0]);
    printf("%s           %.3i      %.2f\n", produtos[1], quantidade[1], valor[1]);
    printf("%s     %.3i      %.2f\n", produtos[2], quantidade[2], valor[2]);
    printf("==============================\n");
    printf("Total                   %.2f\n", valor[3]);

    return 0;
}