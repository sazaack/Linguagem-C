#include <stdio.h>

int main() {
    int ano_nascimento, ano_atual, idade;

    printf("Digite o ano de nascimento: ");
    scanf("%d", &ano_nascimento);

    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);

    // Calcule a idade
    idade = ano_atual - ano_nascimento;

    printf("Voce completa %d anos no ano atual.\n", idade);

    if (idade >= 18) {
        printf("Voce ja pode tirar a habilitacao!\n");
    } else {
        printf("Você ainda nao pode tirar a habilitacao.\n");
    }

    return 0;
}