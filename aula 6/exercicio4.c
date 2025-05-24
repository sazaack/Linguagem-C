#include <stdio.h>

int produtoPorSomas(int a, int b) {
   
    if (b == 0) {
        return 0;
    }
    
    else {
        return a + produtoPorSomas(a, b - 1);
    }
}

int main() {
    int a, b, resultado;
    
    printf("Informe o valor de a: ");
    scanf("%d", &a);
    
    printf("Informe o valor de b: ");
    scanf("%d", &b);
    
    resultado = produtoPorSomas(a, b);
    printf("O produto é %d\n", resultado);
    
    return 0;
}