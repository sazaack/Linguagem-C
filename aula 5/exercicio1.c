#include <stdio.h>

float calcularAreaRetangulo(float base, float altura) {
    return base * altura;
}

int main() {
    float base, altura, area;
    
    printf("Digite a base do retangulo: ");
    scanf("%f", &base);
    
    printf("Digite a altura do retangulo: ");
    scanf("%f", &altura);
    
    area = calcularAreaRetangulo(base, altura);
    
    // Exibe o resultado
    printf("Área do retângulo: %.1f\n", area);
    
    return 0;
}