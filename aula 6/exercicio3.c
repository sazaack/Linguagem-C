#include <stdio.h>

int somaNaturais(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + somaNaturais(n - 1);
    }
}

int main() {
    int N, soma;
    
    printf("Informe o valor de N: ");
    scanf("%d", &N);
    
    soma = somaNaturais(N);
    printf("A soma dos %d primeiros naturais é %d\n", N, soma);
    
    return 0;
}