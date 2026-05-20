#include <stdio.h>

int main (void) {
    int opcao = 0;
    do
    {
        printf("Menu do jogo:\n");
        printf("1 - Novo jogo\n");
        printf("2 - Continuar jogo\n");
        printf("3 - Ver pontuação\n");
        printf("4 - Sair\n");
        printf("Entre uma opcao > ");
        scanf("%i", &opcao);
        while (getchar() != '\n');
    } while (opcao != 4);

    return 0;
}