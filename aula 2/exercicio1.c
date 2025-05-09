#include <stdio.h>

int main() {
    char nome[50];
    int idade;
    float altura;
    char genero;

    // Solicita os dados do usuário
    printf("Qual e o seu nome? ");
    scanf("%s", nome);

    printf("Qual e sua idade? ");
    scanf("%d", &idade);

    printf("Qual a sua altura? ");
    scanf("%f", &altura);

    printf("Qual o seu genero? ");
    scanf(" %c", &genero);

    // Exibe a saída formatada
    printf("\nBem-vindo(a), %s!\n", nome);
    printf("Seu Perfil\n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);
    printf("Genero: %c\n", genero);

    return 0;
}