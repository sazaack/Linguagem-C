#include <stdio.h>
int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    printf("%d e %s\n", numero, (numero % 2 == 0) ? "par" : "impar");

    return 0;
}