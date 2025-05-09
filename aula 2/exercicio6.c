#include <stdio.h>

int main() {
    float valor_produto;
    
    // Solicita o valor do produto
    printf("Digite o valor do produto: R$ ");
    scanf("%f", &valor_produto);
    
    // Cálculos
    float valor_a_vista = valor_produto * 0.9f;       
    float parcelas_3x = valor_produto / 3;            
    float comissao_vista = valor_a_vista * 0.05f;     
    float comissao_parcelada = valor_produto * 0.05f; 
    
    // Exibe os resultados
    printf("\nRESULTADOS:\n");
    printf("Valor com 10%% de desconto (à vista): R$ %.2f\n", valor_a_vista);
    printf("Valor das parcelas em 3x sem juros: 3x de R$ %.2f\n", parcelas_3x);
    printf("Comissao do vendedor (venda à vista): R$ %.2f\n", comissao_vista);
    printf("Comissao do vendedor (venda parcelada): R$ %.2f\n", comissao_parcelada);
    
    return 0;
}