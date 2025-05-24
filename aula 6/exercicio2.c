#include <stdio.h>

void imprimirNumeros(int n) {
    if (n >= 1) {
        printf("%d ", n);
        imprimirNumeros(n - 1);
    }
}

int main() {
    int N;
    
    printf("Informe o valor de N: ");
    scanf("%d", &N);
    
    printf("Números de %d até 1: ", N);
    imprimirNumeros(N);
    printf("\n");
    
    return 0;
}