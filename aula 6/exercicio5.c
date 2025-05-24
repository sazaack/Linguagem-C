#include <stdio.h>

void contarNumeros(int *pares, int *impares, int *positivos, int *negativos) {
    int num;
    
    printf("Digite um número: ");
    scanf("%d", &num);
    
    if (num == 0) {
        return;
    }
    
    if (num % 2 == 0) {
        (*pares)++;
    } else {
        (*impares)++;
    }

    if (num > 0) {
        (*positivos)++;
    } else if (num < 0) {
        (*negativos)++;
    }
    
    contarNumeros(pares, impares, positivos, negativos);
}

int main() {
    int pares = 0, impares = 0, positivos = 0, negativos = 0;
    
    printf("Digite números inteiros (0 para terminar):\n");
    contarNumeros(&pares, &impares, &positivos, &negativos);
    
    printf("\nQuantidade de pares: %d\n", pares);
    printf("Quantidade de ímpares: %d\n", impares);
    printf("Quantidade de positivos: %d\n", positivos);
    printf("Quantidade de negativos: %d\n", negativos);
    
    return 0;
}