#include <stdio.h>

int main()
{

    int idade;

    printf("entre com a sua idade: ");
    scanf("%i", &idade);
    while (getchar() != '\n')
        ;

    // && => falamos e qualquer coisa = sempre falso
    printf("voce eh uma crinaca? %i\n", idade >= 0 && idade <= 12);

    // || => 1 verdaeiro ou qualquer coisa = sempre verdadeiro
    printf("voce tem prioridade para vacinar? %i\n", idade <= 6 || idade >= 60);

    // ! => não verdadeiro = Falso, Não falso = verdadeiro
    printf("voce naum pode votar? %i\n", !(idade >= 16));

    return 0;
}