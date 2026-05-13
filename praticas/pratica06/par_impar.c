#include <stdio.h>

int main(void) {


    int numero = 0;

    printf("=====================\n");
    printf("TESTE DE PAR OU IMPAR\n");
    printf("=====================\n");

    printf("Digite um numero inteiro aleatório:\n");
    scanf("%i", &numero);
    while(getchar()!= '\n');

    if(numero % 2 == 0) {
        printf("seu numero %i é par\n", numero);
    }
    else {
        printf("seu numero %i é ímpar\n", numero);
    }

    return 0;
}