#include <stdio.h>

int main(void)
{
    /*

    =================
    BOLETIM DE NOTAS
    =================

    Disciplina A1   A2   A3   MF
    APC 1      5.2  2.3  6.0  5.6
    MAT DISC   6.0  5.0  -    5.5
    CALC       4.0  4.0  4.0  4.0

    */

    int codigo_disciplina;

    float nota_a1;

    float nota_a2;

    float nota_a3;

    float media_final;

    codigo_disciplina = 118;
    nota_a1 = 5.2f;
    nota_a2 = 2.3f;
    nota_a3 = 6.0f;
    media_final = 5.6f;

    printf("=================\n");
    printf("BOLETIM DE NOTAS\n");
    printf("=================\n");
    printf("\n");
    printf("Disciplina A1   A2   A3   MF\n");
    printf("%05i      %5.1f  %5.1f  %5.1f  %5.1f\n", codigo_disciplina, nota_a1, nota_a2, nota_a3, media_final);

    codigo_disciplina = 257;
    nota_a1 = 6.0f;
    nota_a2 = 5.0f;
    nota_a3 = 5.5f;
    media_final = 5.5f;

    printf("%05i      %5.1f  %5.1f  %5.1f  %5.1f\n", codigo_disciplina, nota_a1, nota_a2, nota_a3, media_final);

    codigo_disciplina = 91;
    nota_a1 = 4.0f;
    nota_a2 = 4.0f;
    nota_a3 = 4.5f;
    media_final = 4.3f;

    printf("%05i      %5.1f  %5.1f  %5.1f  %5.1f\n", codigo_disciplina, nota_a1, nota_a2, nota_a3, media_final);

    return 0;
}