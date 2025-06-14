#include <stdio.h>

void calcular(float num1, float num2, float *soma, float *multiplicacao) {
    *soma = num1 + num2;
    *multiplicacao = num1 * num2;
}

int main() {
    float num1, num2, soma, mult;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    calcular(num1, num2, &soma, &mult);

    printf("Soma: %.1f\n", soma);
    printf("Multiplicacao: %.1f\n", mult);

    return 0;
}