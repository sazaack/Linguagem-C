#include <stdio.h>

int main() {
    float notas[10];
    float soma = 0, media;
    int acima_media = 0;
    
    for (int i = 0; i < 10; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }
    
    media = soma / 10;
    
    for (int i = 0; i < 10; i++) {
        if (notas[i] > media) {
            acima_media++;
        }
    }
    
    printf("\nMedia das notas: %.1f\n", media);
    printf("Quantidade de notas acima da media: %d\n", acima_media);
    
    if (acima_media > 0) {
        printf("Notas acima da media:\n");
        for (int i = 0; i < 10; i++) {
            if (notas[i] > media) {
                printf("- %.1f\n", notas[i]);
            }
        }
    } else {
        printf("Nao ha notas acima da media.\n");
    }
    
    return 0;
}