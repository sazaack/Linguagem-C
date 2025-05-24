#include <stdio.h>

void imprimirNumeros(int n) {
    if (n > 1) {
        imprimirNumeros(n - 1);
    }
    printf("%d ", n);
}

int main() {
    int N;
    
    printf("Informe o valor de N: ");
    scanf("%d", &N);
    
    printf("Números de 1 até %d: ", N);
    imprimirNumeros(N);
    printf("\n");
    
    return 0;
}