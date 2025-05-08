#include <stdio.h>
int main() {
    
    int idade;
    float altura;
    char genero;
    char nome[15];

    printf("Digite sua idade: ");
    scanf("%d" , &idade);

    printf("Digite sua altura: ");
    scanf("%f" , &altura);

    printf("fale seu genero: ");
    scanf(" %c" , &genero);

    printf("digite sua nome: ");
    scanf("%s", nome);

    printf("Idade %d\n" , idade);
    printf("Altura %.2f\n" , altura);
    printf("Genero %c\n" , genero);
    printf("Nome %c\n" , nome);

    return 0;
}