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
    if (imc < 18.5) {
        printf("Classificação: Abaixo do peso\n");
    } 
    else if (imc >= 18.5 && imc <= 24.9) {
        printf("Classificação: Peso normal\n");
    } 
    else if (imc >= 25 && imc <= 29.9) {
        printf("Classificação: Sobrepeso\n");
    } 
    else if (imc >= 30 && imc <= 34.9) {
        printf("Classificação: Obesidade grau 1\n");
    } 
    else if (imc >= 35 && imc <= 39.9) {
        printf("Classificação: Obesidade grau 2\n");
    } 
    else {
        printf("Classificação: Obesidade grau 3\n");
    }

    return 0;
}