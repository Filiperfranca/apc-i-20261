#include <stdio.h>

int main(void)
{

    int nota = 0;

    printf("entre com uma nota de um a cinco: ");
    scanf("%i", &nota);

    if (nota == 1)
    {
        printf("ganhou uma estrela *\n");
    }
    else if (nota == 2)
    {
        printf("ganhou duas estrelas **\n");
    }
    else if (nota == 3)
    {
        printf("ganhou três estrelas ***\n");
    }
    else if (nota == 4)
    {
        printf("ganhou quatro estrelas ****\n");
    }
    else if (nota == 5)
    {
        printf("ganhou cinco estrelas *****\n");
    }
    else
    {
        printf("nota invalida, tente novamente\n");
    }

    switch (nota)
    {
    case 1:
        printf("ganhou uma estrela *\n");
        break;
    case 2:
        printf("ganhou duas estrelas **\n");
        break;
    case 3:
        printf("ganhou três estrelas ***\n");
        break;
    case 4:
        printf("ganhou quatro estrelas ****\n");
        break;
    case 5:
        printf("ganhou cinco estrelas *****\n");
        break;

    default:
        printf("nota invalida, tente novamente\n");
    }

    return 0;
}