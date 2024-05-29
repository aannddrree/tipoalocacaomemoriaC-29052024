#include <stdio.h>

// O array array_estatico é declarado com um tamanho fixo de 10 inteiros.
// A memória para este array é alocada em tempo de compilação.
// Os valores do array são inicializados e exibidos no console.

int main() {
    // Alocação estática de um array de 10 inteiros
    int array_estatico[10];
    
    // Inicializando o array
    for (int i = 0; i < 10; i++) {
        array_estatico[i] = i * 10;
    }

    // Exibindo os valores do array
    for (int i = 0; i < 10; i++) {
        printf("array_estatico[%d] = %d\n", i, array_estatico[i]);
    }

    return 0;
}
