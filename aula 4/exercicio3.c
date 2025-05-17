#include <stdio.h>

int main() {
    int numero;
    int positivos = 0;
    int negativos = 0;

    printf("Digite numeros inteiros (0 para sair):\n");

    do {
        scanf("%d", &numero);

        if (numero > 0) {
            positivos++;
        } else if (numero < 0) {
            negativos++;
        }

    } while (numero != 0);

    printf("Quantidade de numeros positivos: %d\n", positivos);
    printf("Quantidade de numeros negativos: %d\n", negativos);

    return 0;
}