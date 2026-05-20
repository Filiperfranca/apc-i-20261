#include <stdio.h>

int main (){
    printf("==========\n");
    printf("Fatorial\n");
    printf("==========\n");

    int n = 0;
    printf("Entre um numero inteiro positivo > ");
    scanf("%i", &n);
    while (getchar() != '\n');
    printf("%i! = \n", n);
    int fatorial = 1;
    for (int i = n; i > 0; i--){
        printf("%i * %i\n", fatorial, i);
        fatorial *= i;
    }
    printf("Fatorial: %i\n", fatorial);

    return 0;
}