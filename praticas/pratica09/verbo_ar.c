#include <stdio.h>
#include <string.h>

int main (void) {
    char verbo[50];

    printf("Digite um verbo no infinitivo: ");
    fgets(verbo, sizeof(verbo), stdin);

    verbo[strcspn(verbo, "\n")] = '\0';

    int n = strlen(verbo);

    if (n < 2) {
        printf("Verbo invalido.\n");
    }
    else if (strcmp(verbo + n - 2, "ar") == 0) {
        printf("1ª conjugacao (-ar)\n");
    }
    else if (strcmp(verbo + n - 2, "er") == 0) {
        printf("2ª conjugacao (-er)\n");
    }
    else if (strcmp(verbo + n - 2, "ir") == 0) {
        printf("3ª conjugacao (-ir)\n");
    }
    else {
        printf("Nao parece estar no infinitivo.\n");
    }
}