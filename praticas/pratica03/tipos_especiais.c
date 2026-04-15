#include <stdio.h>

#define proporcaoaurea 1.61803398874989484820

int main(void)
{
    int paises = 195;
    const int idiomas = 7100;
    long long int populacao = 8274065924;

    printf("paises no mundo: %i\n", paises);
    printf("idiomas no mundo: %i\n", idiomas);
    printf("populacao no mundo: %lld\n", populacao);
    printf("proporcao aurea: %.20f\n", proporcaoaurea);

    return 0;
}