#include <stdio.h>

int buscar(int array[], int tamanho, int valor) {
    for (int i = 0; i < tamanho; i++) {
        if (array[i] == valor) {
            return i;
        }
    }
    return -1;
}

int main() {
    int numeros[10];
    int valor_busca, posicao;
    
    printf("Digite 10 numeros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
    }
    
    printf("\nDigite o numero que deseja buscar:\n");
    scanf("%d", &valor_busca);
    
    posicao = buscar(numeros, 10, valor_busca);
    
    if (posicao != -1) {
        printf("Numero encontrado na posicao: %d\n", posicao);
    } else {
        printf("Numero nao encontrado no vetor.\n");
    }
    
    return 0;
}