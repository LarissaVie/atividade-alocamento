#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    
    
    do {
        printf("Digite um valor nao negativo para N: ");
        scanf("%d", &N);
        
        if (N < 0) {
            printf("Valor inválido. N deve ser um número  não negativo.\n");
        }
    } while (N < 0);

   
    int* V = (int*)malloc(N * sizeof(int));
    if (V == NULL) {
        printf("erro na alocação de memória.\n");
        return 1; 
    }

 
    for (int i = 0; i < N; i++) {
        do {
            printf("Digite o valor para V [%d] (deve ser >= 2): ", i);
            scanf("%d", &V[i]);
            
            if (V[i] < 2) {
                printf("Valor inválido. O valor deve ser maior ou igual a 2.\n");
            }
        } while (V[i] < 2);
    }

 
    printf("Valores do vetor:\n");
    for (int i = 0; i < N; i++) {
        printf("V[%d] = %d\n", i, V[i]);
    }

   
    free(V);

    return 0;
}
