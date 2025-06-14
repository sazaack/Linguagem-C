#include <stdio.h>

int main() {
    int valor, novo_valor;
    int *ptr = &valor;

    printf("Digite o valor original: ");
    scanf("%d", &valor);

    printf("Digite o novo valor: ");
    scanf("%d", &novo_valor);

    *ptr = novo_valor;

    printf("Valor original: %d\n", valor);
    printf("Novo valor apos a modificacao via ponteiro: %d\n", *ptr);

    return 0;
}