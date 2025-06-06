#include <stdio.h>
#include <string.h>

int ehPalindromo(char str[]) {
    int i, j;
    int len = strlen(str);
    for (i = 0, j = len - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char palavra[101];

    printf("Digite uma palavra: ");
    scanf("%100s", palavra);

    if (ehPalindromo(palavra)) {
        printf("É palíndromo!\n");
    } else {
        printf("Não é palíndromo.\n");
    }

    return 0;
}