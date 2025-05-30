#include <stdio.h>

int main() {
    int matriz[3][3], n, encontrado = 0;
    
    printf("Digite o numero a ser procurado: ");
    scanf("%d", &n);
    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printf("\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(matriz[i][j] == n) {
                printf("O numero %d foi encontrado na posicao:\n", n);
                printf("Linha %d, Coluna %d\n", i, j);
                encontrado = 1;
            }
        }
    }
    
    if(!encontrado) {
        printf("O numero %d nao foi encontrado\n", n);
    }
    
    return 0;
}