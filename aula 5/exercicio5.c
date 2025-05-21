#include <stdio.h>


int somar(int a, int b) {
    return a + b;
}

int subtrair(int a, int b) {
    return a - b;
}

int multiplicar(int a, int b) {
    return a * b;
}

int dividir(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Erro: Divisão por zero!\n");
        return 0;
    }
}

int main() {
    int num1, num2, opcao, resultado;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("\nEscolha a operacao:\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("Opcao: ");
    scanf("%d", &opcao);


    switch(opcao) {
        case 1:
            resultado = somar(num1, num2);
            printf("Resultado da soma: %d\n", resultado);
            break;
        case 2:
            resultado = subtrair(num1, num2);
            printf("Resultado da subtracao: %d\n", resultado);
            break;
        case 3:
            resultado = multiplicar(num1, num2);
            printf("Resultado da multiplicacao: %d\n", resultado);
            break;
        case 4:
            resultado = dividir(num1, num2);
            if (num2 != 0) {
                printf("Resultado da divisao: %d\n", resultado);
            }
            break;
        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}