#include <stdio.h>

int main (void) {
    printf("==========\n");
    printf("Media Aritmetica\n");
    printf("==========\n");

    printf("Entre com quantos números quiser numeros inteiros positivos (digite 00 para parar):\n");
    int n[100];
    for (int i=0; i<100; i++){
        scanf("%i", &n[i]);
        while (getchar() != '\n');
        if (n[i] == 00){
            break;
        }
    }
    int contador = 0;
    int soma = 0;
    for (int i=0; n[i] != 00; i++){
        soma += n[i];
        contador++;
    }
    printf("Soma: %i\n", soma);
    float media = (float)soma / contador;
    printf("Media: %.2f\n", media);
    return 0;
}