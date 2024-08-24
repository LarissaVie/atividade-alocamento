#include <stdio.h>
#include <string.h> 

typedef struct {
    int matricula;        
    char nome[100];       
    float notas[3];       
} Aluno;

int main() {
   
    Aluno aluno;

   
    printf("Tamanho da estrutura Aluno: %zu bytes\n", sizeof(aluno));

    return 0;
}
