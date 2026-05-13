#include <stdio.h>

int main(void) {

    int numero = 0;

    printf("Entre com um numero de 1 a 10: ");
    scanf("%i", &numero);
    while (getchar() != '\n');

    while (numero < 1 || numero > 10) {
        printf("Numero invalido, entre com um numero de 1 a 10: ");
        scanf("%i", &numero);
        while (getchar() != '\n');
    }

    do
    {
        printf("deu certo, Entre com um numero de 1 a 10: ");
        scanf("%i", &numero);
        while (getchar() != '\n');
    } while (numero < 1 || numero > 10);

}