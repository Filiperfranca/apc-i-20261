#include <stdio.h>

struct contato_t {
    char nome[61];
    long int telefone;
};

struct ponto_t {
    float x;
    float y;
};

struct aluno_t {
    int matricula;
    char nome[61];
    char email[61];
    long int telefone;
};

int main() { 
    
    // 1. Cadastro de um único contato
    struct contato_t contato;
    printf("Digite o nome do contato: ");
    printf("Nome: ");
    scanf("%[^\n]s", contato.nome);
    while (getchar() != '\n'); 
    printf("Telefone: ");
    scanf("%ld", &contato.telefone);
    while (getchar() != '\n');

    printf("\nContato cadastrado: %s - %li\n\n", contato.nome, contato.telefone);

    // 2. Cadastro de uma lista (vetor) de 10 contatos
    struct contato_t contatos[10];

    for (int i = 0; i < 10; i++) 
    {
        printf("Contato %i\n", i + 1);
        printf("Nome: ");
        scanf("%[^\n]s", contatos[i].nome);
        while (getchar() != '\n'); 
        printf("Telefone: ");
        scanf("%li", &contatos[i].telefone);
        while (getchar() != '\n');
    }

    // 3. Exibição da lista completa
    printf("\nSua agenda de contatos:\n");
    for (int i = 0; i < 10; i++) {
        // Adicionei o número na frente para o usuário saber qual o "índice" de cada um
        printf("%i. %s - %li\n", i + 1, contatos[i].nome, contatos[i].telefone);
    }
    
    // 4. Buscar contato por número (posição)
    int procurando = 0;
    int achei = -1; // Começa com -1 significando "não encontrado"
    
    printf("\nEntre com o numero do contato que deseja buscar (1 a 10): ");
    scanf("%i", &procurando);
    while (getchar() != '\n');
    
    // Procurando no vetor
    for (int i = 0; i < 10; i++) {
        // Se o número digitado (ex: 1) for igual à posição real + 1 (0 + 1)
        if (procurando == (i + 1)) {
            achei = i; // Guarda o índice real onde ele está no vetor
            break;     // Para o loop imediatamente pois já achou
        }
    } // <-- O loop termina aqui!
    
    // 5. Exibição do resultado da busca (Fica FORA do loop)
    if (achei == -1) {
        printf("O contato %i nao foi encontrado.\n", procurando);
    } else {
        printf("\nAchei o contato!\n");
        printf("%s - %li\n", contatos[achei].nome, contatos[achei].telefone);
    }

    return 0;
} // <-- Agora a main fecha corretamente aqui