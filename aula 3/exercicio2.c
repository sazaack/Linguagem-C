#include <stdio.h>

int main() {
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    // Verifica a faixa etária
    if (idade >= 65) {
        printf("Você é um idoso.\n");
    } 
    else if (idade >= 18) {
        printf("Você é um adulto.\n");
    } 
    else if (idade >= 13) {
        printf("Você é um adolescente.\n");
    } 
    else {
        printf("Você é uma criança.\n");
    }

    return 0;
}