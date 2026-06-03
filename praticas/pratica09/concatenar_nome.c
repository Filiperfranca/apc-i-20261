#include <stdio.h>
#include <string.h>

int main (void) {
    char nome[50];
    char sobrenome[50];

    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Digite seu sobrenome: ");
    fgets(sobrenome, sizeof(sobrenome), stdin);

    nome[strcspn(nome, "\n")] = '\0';
    sobrenome[strcspn(sobrenome, "\n")] = '\0';

    strcat(nome, " ");
    strcat(nome, sobrenome);
    printf("%s\n", nome);

}