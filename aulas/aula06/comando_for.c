#include <stdio.h>

int main (){
    int numero;

    printf("Entre com um numero de 1 a 10: ");
    scanf("%i",&numero);

    //printf("")



     //repete de 1 a 10
    for(int i=1; i<=10; i++){
        printf("%i X %i = %i\n", numero, i, numero * i);
    }
    //repete de 10 a 1
    for(int i=10; i>=0; i--){
        printf("%i X %i = %i\n", numero, i, numero * i);
    }
    //CUIDADO
    // for (int i=1; i>=0; i++){
      //  printf("Ao infinito e alem\n");
    //}



    return 0;
}