#include <stdio.h>

int main(void)
{
    char tecla_pressionada;

    printf("digite uma tecla: ");
    scanf("%c", &tecla_pressionada);
    while (getchar() != '\n')
        ;

    printf("a tecla pressionada é %c\n", tecla_pressionada);

    int ano1;
    int ano;

    printf("digite o ano que nasceu: ");
    scanf("%i", &ano1);
    while (getchar() != '\n')
        ;
    printf("\n");
    printf("digite o ano atual: ");
    scanf("%i", &ano);
    while (getchar() != '\n')
        ;

    int idade = ano - ano1;

    printf("a sua idade é: %i\n", idade);

    float preco;
    printf("informe o preco da passagem (use ponto '.'):  ");
    scanf("%f", &preco);
    while (getchar() != '\n')
        ;

    printf("preco da passagem eh %.2f \n", preco);

    return 0;
}