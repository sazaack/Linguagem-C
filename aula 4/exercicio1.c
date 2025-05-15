#include <stdio.h>

int main() {
    int inicial;
    int final;

    printf("Qual o valor inicial? ");
    scanf("%d", &inicial);

    printf("Qual o valor final? ");
    scanf("%d", &final);


    for (int contador = inicial; contador <= final; contador++) {
        printf("%d ", contador);
    }

    return 0;
}