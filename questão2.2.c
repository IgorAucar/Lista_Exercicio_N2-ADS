#include <stdio.h>
#include <stdlib.h>

int* cria_vetor(int n) {
    int* vetor = (int*) malloc(n * sizeof(int));
    if (vetor == NULL) {
        printf("Erro: Falha na alocacao de memoria.\n");
        exit(1);
    }
    return vetor;
}

void imprime_vetor(int* vetor, int n) {
    printf("\nElementos do vetor:\n");
    for (int i = 0; i < n; i++) {
        printf("Vetor[%d] = %d\n", i, vetor[i]);
    }
}

void libera_vetor(int* vetor) {
    free(vetor);
    printf("\nMemoria liberada com sucesso.\n");
}

int main() {
    int n;

    printf("Digite o tamanho do vetor (n): ");
    scanf("%d", &n);

    int* meu_vetor = cria_vetor(n);

    printf("Digite os %d elementos do vetor:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i);
        scanf("%d", &meu_vetor[i]);
    }

    imprime_vetor(meu_vetor, n);

    libera_vetor(meu_vetor);

    return 0;
}