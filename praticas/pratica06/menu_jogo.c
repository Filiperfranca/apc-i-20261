#include <stdio.h>

int main(void) {

    int opcao = 0;
    printf("=====================\n");
    printf("MENU DE JOGOS\n");
    printf("=====================\n");
    printf("1. novo jogo\n");
    printf("2. continuar jogo\n");
    printf("3. ver pontuacao\n");
    printf("0. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%i", &opcao);
    while(getchar()!= '\n');

    switch (opcao)
    {
    case 1:
        printf("Novo jogo iniciado\n");
        break;
    case 2:
        printf("Continuando jogo\n");
        break;
    case 3:
        printf("Verificando pontuação\n");
        break;
    case 0:
        printf("Saindo do jogo\n");
        break;
    default:
        printf("Opção inválida\n");
        break;
    }
    return 0;
}