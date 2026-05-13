#include <stdio.h>

int main(void) {

    int idade = 0;

    printf("=====================\n");
    printf("CLASSIFICAÇÃO DE IDADE\n");
    printf("=====================\n");

    printf("Digite a sua idade:\n");
    scanf("%i", &idade);
    while(getchar()!= '\n');

    if(idade < 0) {
        printf("Idade inválida\n");
    }
    else if(idade <= 12) {
        printf("Criança\n");
    }
    else if(idade <= 17) {
        printf("Adolescente\n");
    }
    else if(idade <= 64) {
        printf("Adulto\n");
    }
    else {
        printf("Idoso\n");
    }

    return 0;
} 
