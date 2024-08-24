#include <stdio.h>
#include <stdlib.h>

int main() {
   
    char *charPtr = (char *)malloc(sizeof(char));
    int *intPtr = (int *)malloc(sizeof(int));
    float *floatPtr = (float *)malloc(sizeof(float));
    double *doublePtr = (double *)malloc(sizeof(double));

    if (charPtr == NULL || intPtr == NULL || floatPtr == NULL || doublePtr == NULL) {
        printf("Erro de alocação na memória.\n");
        return 1;
    }

 
    printf("Tamanho de char: %zu bytes\n", sizeof(*charPtr));
    printf("Tamanho de int: %zu bytes\n", sizeof(*intPtr));
    printf("Tamanho de float: %zu bytes\n", sizeof(*floatPtr));
    printf("Tamanho de double: %zu bytes\n", sizeof(*doublePtr));

    
    free(charPtr);
    free(intPtr);
    free(floatPtr);
    free(doublePtr);

    return 0;
}
