#include <stdio.h>

int main() {
    float angulo1, angulo2, angulo3;

    printf("Digite o primeiro angulo (em graus): ");
    scanf("%f", &angulo1);

    printf("Digite o segundo angulo (em graus): ");
    scanf("%f", &angulo2);

    //Calcule o terceiro angulo
    angulo3 = 180 - (angulo1 + angulo2);

    // Exibe o resultado
    printf("\nO terceiro angulo mede: %.2f graus\n", angulo3);

    return 0;
}