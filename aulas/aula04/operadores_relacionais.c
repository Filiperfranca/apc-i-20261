#include <stdio.h>

int main(void)
{
    int idade;

    printf("entre com a sua idade: ");
    scanf("%i", &idade);
    while (getchar() != '\n')
        ;

    printf("voce eh menor de idade? %i\n", idade < 18);
    printf("voce tem 15 anos? %i\n", idade == 15);
    printf("voce naun tem 15 anos? %i\n", idade != 15);
    printf("voce eh um idoso? %i\n", idade > 59);

    return 0;
}