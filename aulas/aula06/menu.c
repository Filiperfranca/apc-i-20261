#include <stdio.h>

int main (){
    int opcao = 0;

do{
    printf("Menu principal:\n");
    printf("1 - Consultar saldo\n");
    printf("2 - Recarregar\n");
    printf("3 - Ver mensagens\n");
    printf("4 - Ver ligacoes\n");
    printf("5 - Sair\n");
    printf("Entre uma opcao > ");
    int opcao = 0;
    scanf("%i", &opcao);
    while(getchar() != '\n');

 }  switch (opcao)
    case 1: printf("Saldo: R$ 10,00\n");break;
    case 2: printf("Escolha entre 10, 20 ou 50\n"); break;
    case 3: printf("Voce nao tem mensagens\n"); break;
    case 4: printf("Ultimas ligacoes: 123-4567\n"); break;
    case 5: printf("Obrigado pelo contato! Ate logo!\n"); break;
    default: printf("Opcao invalida! Tente novamente.\n"); 

    while (opcao != 5);
        

    return 0;
}