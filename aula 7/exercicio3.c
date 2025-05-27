#include <stdio.h>

int main() {

    int numeros[10], maior = 0, menor;

    for (int i = 0; i < 10; i++) {
        int numero;

        printf("Digite um numero: ");
        scanf("%d", &numero);

        numeros[i] = numero;
    }

    menor = numeros[0]; 

    for (int i = 0; i < 10; i++) {
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
        
    }

    printf("O maior numero e %d\n", maior);
    printf("O menor numero e %d\n", menor);




    return 0;
}