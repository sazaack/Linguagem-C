#include <stdio.h>

int main() {
    int numeros[3][3];
    int soma_linha, soma_coluna;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &numeros[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        soma_linha = 0;
        for (int j = 0; j < 3; j++) {
            soma_linha += numeros[i][j];
        }
        printf("Soma da linha %d: %d\n", i, soma_linha);
    }

    printf("\n");

    for (int j = 0; j < 3; j++) {
        soma_coluna = 0;
        for (int i = 0; i < 3; i++) {
            soma_coluna += numeros[i][j];
        }
        printf("Soma da coluna %d: %d\n", j, soma_coluna);
    }

    return 0;
}