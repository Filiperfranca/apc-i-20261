#include <stdio.h>

int main() {
    float nota1[10], nota2[10], media[10];

    printf("======== BOLETIM DA TURMA ========\n\n");

    // Entrada das notas
    for (int i = 0; i < 10; i++) {
        printf("Aluno %d\n", i + 1);

        printf("Nota 1: ");
        scanf("%f", &nota1[i]);

        printf("Nota 2: ");
        scanf("%f", &nota2[i]);

        media[i] = (nota1[i] + nota2[i]) / 2.0;

        printf("\n");
    }

    // Exibição do boletim
    printf("\n========== BOLETIM ==========\n");
    printf("Aluno\tNota1\tNota2\tMedia\n");

    for (int i = 0; i < 10; i++) {
        printf("%d\t%.1f\t%.1f\t%.1f\n",
               i + 1,
               nota1[i],
               nota2[i],
               media[i]);
    }

    return 0;
}