#include <stdio.h>
#include <string.h>

int main (void) {
    char string1[50];
    char string2[50];
    char string3[50];

    printf("Digite a primeira string: ");
    fgets(string1, sizeof(string1), stdin);

    printf("Digite a segunda string: ");
    fgets(string2, sizeof(string2), stdin);

    printf("Digite a terceira string: ");
    fgets(string3, sizeof(string3), stdin);

    string1[strcspn(string1, "\n")] = '\0';
    string2[strcspn(string2, "\n")] = '\0';
    string3[strcspn(string3, "\n")] = '\0';

    if (strcmp(string1, string2) < 0) {
        if (strcmp(string1, string3) < 0) {
            printf("%s\n", string1);
            if (strcmp(string2, string3) < 0) {
                printf("%s\n", string2);
                printf("%s\n", string3);
            } else {
                printf("%s\n", string3);
                printf("%s\n", string2);
            }
        } else {
            printf("%s\n", string3);
            printf("%s\n", string1);
            printf("%s\n", string2);
        }
    } else {
        if (strcmp(string2, string3) < 0) {
            printf("%s\n", string2);
            if (strcmp(string1, string3) < 0) {
                printf("%s\n", string1);
                printf("%s\n", string3);
            } else {
                printf("%s\n", string3);
                printf("%s\n", string1);
            }
        } else {
            printf("%s\n", string3);
            printf("%s\n", string2);
            printf("%s\n", string1);
        }
    }

}