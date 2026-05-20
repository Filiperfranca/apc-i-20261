#include <stdio.h>

int main (){
    int n = 0;
    printf("Entre um numero inteiro positivo > ");
    scanf("%i", &n);
    while (getchar() != '\n');
    printf("Multiplos de %i:\n", n);
    for (int i = 1; i <= 100; i++){
        if (i % n == 0){
            printf("%i\n", i);
        }
    }
    printf("\n");
    return 0;
}