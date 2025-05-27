#include <stdio.h>

int main() {

    char nome[20];
    float nota1;
    float nota2;
    float media;

    printf("Qual o seu nome? ");
    scanf("%s", nome);

    printf("Qual a sua primeira nota? ");
    scanf("%f", &nota1);

    printf("Qual a sua segunda nota? ");
    scanf("%f", &nota2);

    //Calcule a media
    media = nota1 + nota2;

    // Exibe o resultado
     printf("\nO aluno %s obteve media final %.1f.\n", nome, media);

    return 0;
}
