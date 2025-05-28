#include <stdio.h>

int encontrar_mais_repetido(int array[10]) {
    int numero_mais_repetido = array[0];
    int max_repeticoes = 1;
    
    for (int i = 0; i < 10; i++) {
        int repeticoes = 1;
        
        for (int j = i + 1; j < 10; j++) {
            if (array[i] == array[j]) {
                repeticoes++;
            }
        }
        
        if (repeticoes > max_repeticoes || 
           (repeticoes == max_repeticoes && array[i] > numero_mais_repetido)) {
            max_repeticoes = repeticoes;
            numero_mais_repetido = array[i];
        }
    }
    
    return numero_mais_repetido;
}

int main() {
    int valores[10];
    
    printf("Digite 10 valores:\n");
    for (int i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &valores[i]);
    }
    
    int mais_repetido = encontrar_mais_repetido(valores);
    
    printf("\nO numero que mais se repete eh: %d\n", mais_repetido);
    
    return 0;
}