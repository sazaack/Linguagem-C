#include <stdio.h>

int main() {
    int senha_correta = 8089; // Senha definida no programa
    int senha_digitada;

    do {
        printf("Digite a senha: ");
        scanf("%d", &senha_digitada);

        if (senha_digitada != senha_correta) {
            printf("Senha incorreta. Tente novamente.\n");
        }
    } while (senha_digitada != senha_correta);

    printf("Acesso liberado.\n");

    return 0;
}