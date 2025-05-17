#include <stdio.h>

int main() {
    float pH;

    printf("Digite os valores de pH das substancias (-1 para encerrar):\n");

    while (1) { // Loop infinito até que o usuário digite -1
        scanf("%f", &pH);

        if (pH == -1) {
            break;
        }

        if (pH < 0 || pH > 14) {
            printf("Valor de pH invalido! O pH deve estar entre 0 e 14.\n");
        } else if (pH < 7) {
            printf("Substancia Acida\n");
        } else if (pH > 7) {
            printf("Substancia Basica\n");
        } else { // pH == 7
            printf("Substancia Neutra\n");
        }
    }

    return 0;
}