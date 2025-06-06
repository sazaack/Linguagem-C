#include <stdio.h>
#include <string.h>

int main() {
    char frase1[81], frase2[41];

    printf("Digite a primeira frase: ");
    fgets(frase1, 41, stdin);

    printf("Digite a segunda frase: ");
    fgets(frase2, 41, stdin);

    // Remover o \n do final das frases, se houver
    frase1[strcspn(frase1, "\n")] = 0;
    frase2[strcspn(frase2, "\n")] = 0;

    strcat(frase1, " ");
    strcat(frase1, frase2);

    printf("Frase resultante: %s\n", frase1);

    return 0;
}