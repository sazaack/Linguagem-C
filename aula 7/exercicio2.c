#include <stdio.h>

int main() {

    int numeros[10];
    int soma = 0;

    for (int i = 0; i < 10; i++) {
        int numero; 

        printf("Digite o numero: ");
        scanf("%d", &numero);

        numeros[i] = numero;

    }

    for (int i = 9; i >= 0; i--) {
        printf("[%d] = %d\n", i, numeros[i]);
        soma = soma + numeros[i];

    }

    printf("A soma e %d\n", soma);
   
    return 0;
}