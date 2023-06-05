#include <stdio.h>

#define TAMANHO_VETOR 5

int main() {
    int vetorA[TAMANHO_VETOR];
    int vetorB[TAMANHO_VETOR];

    printf("Digite %d elementos do vetorA:\n", TAMANHO_VETOR);
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        scanf("%d", &vetorA[i]);
    }

    for (int i = 0; i < TAMANHO_VETOR; i++) {
        vetorB[i] = vetorA[i] * 2;
    }

    printf("\nValores resultantes do vetorB:\n");
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        printf("%d \n", vetorB[i]);

    }
    printf("\n");

    return 0;
}
