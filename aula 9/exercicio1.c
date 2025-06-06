#include <stdio.h>
#include <string.h>

int main() {
    char palavra[100];

    printf("Digite uma palavra: ");
    scanf("%99s", palavra);

    int comprimento = strlen(palavra);
    printf("Total de caracteres: %d\n", comprimento);

    if (comprimento > 15) {
        printf("Palavra longa\n");
    } else if (comprimento > 8 && comprimento <= 15) {
        printf("Palavra media\n");
    } else if (comprimento > 5 && comprimento <= 8) {
        printf("Palavra pequena\n");
    }

    return 0;
}