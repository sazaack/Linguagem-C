#include <stdio.h>

int main() {
    char nome[15];
    float peso, altura, imc;

    
    printf("Digite seu nome: ");
    scanf("%49[^\n]", nome);

    printf("Digite seu peso em kg: ");
    scanf("%f", &peso);

    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);

    // Calcula o IMC usando a fórmula: peso / (altura)^2
    imc = peso / (altura * altura);

    // Exibe o resultado
    printf("\nO IMC de %s eh: %.2f\n", nome, imc);

    return 0;
}