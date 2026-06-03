#include <stdio.h>
#include <stdbool.h>

int main (void) {
    printf("==========\n");
    printf("Localização de Número\n");
    printf("==========\n");
    int n[10];
    for (int i=0; i<10; i++){
        printf("Entre o %iº numero inteiro > ", i+1);
        scanf("%i", &n[i]);
        while (getchar() != '\n');
    }
    printf("Entre um numero inteiro para localizar > ");
    int numero;
    scanf("%i", &numero);
    while (getchar() != '\n');

    bool encontrado = 0;
    for (int i=0; i<10; i++){
        if (n[i] == numero){
            printf("Número encontrado na posição %i\n", i+1);
            encontrado = 1;
        }
    }
    if (encontrado == 0){
        printf("Número não encontrado\n");
    }

    return 0;
}