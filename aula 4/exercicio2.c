#include <stdio.h>

int main() {
    int numero;
    int somapares = 0;

    printf("quantos numeros vai Digitar0: ");
    scanf("%d", &numero);

    for (int contador = 1; contador <= numero; contador++) {

        if (contador % 2 == 0) {
            somapares = somapares + contador;
        }
    }
    printf("pares: %d\n", somapares);

    return 0;
}