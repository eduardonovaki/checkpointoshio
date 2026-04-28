#include <stdio.h>

void calcularMedia();
void calcularDerivada();

int main() {
    int opcao;
    do {
        printf("\n--- SISTEMA ACADEMICO ---\n");
        printf("1. Media e Classificacao\n");
        printf("2. Derivada\n");
        printf("3. Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1: calcularMedia(); break;
            case 2: calcularDerivada(); break;
            case 3: printf("Saindo...\n"); break;
            default: printf("Opcao invalida!\n");
        }
    } while(opcao != 3);
    return 0;
}