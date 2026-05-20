#include <stdio.h>

int main (){
    int n;
    do {
        printf("Entre um numero inteiro entre 0 e 10 > ");
        scanf("%i", &n);
        while (getchar() != '\n');
    } while (n < 0 || n > 10);
    printf("%i valor válido!\n", n);
    return 0;
}