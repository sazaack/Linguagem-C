#include <stdio.h> 


void mostrarMensagem(char nome[], int idade) {
    printf("Ola, %s, voce tem %d anos. Seja bem-vindo(a)!\n", nome, idade);
}

int main() {
    char nome[50];  
    int idade;      

    
    printf("Nome: ");
    scanf("%49s", nome);  

   
    printf("Idade: ");
    scanf("%d", &idade);

   
    mostrarMensagem(nome, idade);

    return 0;
}