#include <stdio.h>

int main(void) {

    int dia = 0;

    printf("=====================\n");
    printf("DIA DA SEMANA\n");
    printf("=====================\n");

    printf("Digite um numero inteiro de 1 a 7:\n");
    scanf("%i", &dia);
    while(getchar()!= '\n');

    if(dia == 1 || dia == 7) {
        printf("Fim de semana\n");
    }
    else if(dia >= 2 && dia <= 6) {
        printf("Dia útil\n");
    }
    else {
        printf("Número inválido\n");
    }
    return 0;
}