#include <stdio.h>
#include <windows.h>
#include <stdlib.h> 

int mostrarMenu();
void criarConta();
void exibirContas();
void depositar();
void sacar();
void buscarConta();

int main() {
    int opcao = 0;
    
    do {
        opcao = mostrarMenu();
        
        switch (opcao) {
            case 1:
                criarConta();
                break;
            case 2:
                exibirContas();
                break;
            case 3:
                depositar();
                break;
            case 4:
                sacar();
                break;
            case 5:
                buscarConta();
                break;
            case 6:
                printf("Saindo do sistema...\n");
                Sleep(2000);
                break;
            default:
                printf("Opcao invalida!\n");
                Sleep(1000);
        }
        
        system("cls");
    } while (opcao != 6);
    
    return 0;
}

// Função que exibe o menu e retorna a opção escolhida
int mostrarMenu() {
    int opcao;
    
    printf("===== SISTEMA BANCÁRIO =====\n");
    printf("1. Criar conta\n");
    printf("2. Exibir contas\n");
    printf("3. Depositar\n");
    printf("4. Sacar\n");
    printf("5. Buscar conta\n");
    printf("6. Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);
    
    return opcao;
}

// Funções das operações
void criarConta() {
    printf("Opcao Criar Conta selecionada.\n");
    Sleep(2000);
}

void exibirContas() {
    printf("Opcao Exibir Contas selecionada.\n");
    Sleep(2000);
}

void depositar() {
    printf("Opcao Depositar selecionada.\n");
    Sleep(2000);
}

void sacar() {
    printf("Opcao Sacar selecionada.\n");
    Sleep(2000);
}

void buscarConta() {
    printf("Opcao Buscar Conta selecionada.\n");
    Sleep(2000);
}