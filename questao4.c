#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho;
    int *vetor;

  
    printf("Digite o tamanho pro vetor: ");
    scanf("%d", &tamanho);

    
    vetor = (int *)malloc(tamanho * sizeof(int));
    if (vetor == NULL) {
        printf("Erro de  alocação na memória.\n");
        return 1; 
    }

    
    printf("Digite %d valores para o vetor:\n", tamanho);
    for (int i = 0; i < tamanho; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    
    printf("\nValores do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Valor %d: %d\n", i + 1, vetor[i]);
    }

    
    free(vetor);

    return 0;
}
