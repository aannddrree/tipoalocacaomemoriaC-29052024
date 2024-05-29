#include <stdio.h>
#include <stdlib.h>

// O ponteiro array_dinamico é usado para apontar para uma região de memória alocada dinamicamente com malloc.
// malloc(10 * sizeof(int)) aloca memória suficiente para 10 inteiros.
// É importante verificar se malloc retornou NULL, o que indicaria uma falha na alocação.
// Os valores do array são inicializados e exibidos no console.
// A função free é usada para liberar a memória alocada dinamicamente, evitando vazamentos de memória.

int main() {
    // Alocação dinâmica de um array de 10 inteiros
    int *array_dinamico = (int *)malloc(10 * sizeof(int));
    
    // Verificando se a alocação foi bem-sucedida
    if (array_dinamico == NULL) {
        printf("Erro: Falha na alocação de memória.\n");
        return 1; // Saída do programa em caso de falha
    }

    // Inicializando o array
    for (int i = 0; i < 10; i++) {
        array_dinamico[i] = i * 20;
    }

    // Exibindo os valores do array
    for (int i = 0; i < 10; i++) {
        printf("array_dinamico[%d] = %d\n", i, array_dinamico[i]);
    }

    // Liberando a memória alocada
    free(array_dinamico);

    return 0;
}
