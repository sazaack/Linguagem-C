#include <stdio.h>

void verificarSituacao(float media, int faltas) {
    if (media >= 9.5f && faltas <= 10) {
        printf("Situação: APROVADO COM LOUVOR\n");
    } 
    else if (media >= 7.0f && faltas <= 10) {
        printf("Situação: APROVADO\n");
    } 
    else {
        printf("Situação: REPROVADO\n");
    }
}

int main() {
    float media;
    int faltas;

    printf("Media: ");
    scanf("%f", &media);
    
    printf("Faltas: ");
    scanf("%d", &faltas);

    verificarSituacao(media, faltas);

    return 0;
}