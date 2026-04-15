#include <stdio.h>

int main(void)
{

    unsigned short int idade;
    char sexo;
    float altura;
    double peso;

    printf("digite sua idade: ");
    scanf("%hu", &idade);
    while (getchar() != '\n')
        ;

    printf("digite seu sexo(M ou F): ");
    scanf(" %c", &sexo);
    while (getchar() != '\n')
        ;

    if (sexo != 'F' && sexo != 'M' && sexo != 'f' && sexo != 'm')
    {
        printf("escolha M ou F para o sexo!");
        return 1;
    }

    printf("digite sua altura: ");
    scanf("%f", &altura);
    while (getchar() != '\n')
        ;

    printf("digite seu peso: ");
    scanf("%lf", &peso);
    while (getchar() != '\n')
        ;

    printf("sua idade eh %hu\n", idade);

    if (sexo == 'M' || sexo == 'm')
    {
        printf("sexo Masculino\n");
    }
    else
    {
        printf("sexo Feminino\n");
    }

    printf("sua altura eh %.2f m\n", altura);
    printf("seu peso eh %.3lf kg\n", peso);

    return 0;
}