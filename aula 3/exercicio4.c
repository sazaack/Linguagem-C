#include <stdio.h>

int main() {
    int num1, num2, operacao;
    float resultado;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    printf("\nEscolha a operação:\n");
    printf("1 - Soma\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    printf("Digite o número da operação desejada: ");
    scanf("%d", &operacao);

    switch (operacao) {
        case 1: // Soma
            resultado = num1 + num2;
            printf("\nResultado: %d + %d = %.2f\n", num1, num2, resultado);
            break;
        case 2: // Subtração
            resultado = num1 - num2;
            printf("\nResultado: %d - %d = %.2f\n", num1, num2, resultado);
            break;
        case 3: // Multiplicação
            resultado = num1 * num2;
            printf("\nResultado: %d * %d = %.2f\n", num1, num2, resultado);
            break;
        case 4: // Divisão
            if (num2 != 0) {
                resultado = (float)num1 / num2; // Conversão para float para divisão exata
                printf("\nResultado: %d / %d = %.2f\n", num1, num2, resultado);
            } else {
                printf("\nErro: Divisão por zero!\n");
            }
            break;
        default:
            printf("\nOperação inválida!\n");
    }

    return 0;
}