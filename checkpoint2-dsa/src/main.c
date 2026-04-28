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

void calcularMedia() {
    float n1, n2, media;
    printf("Nota 1: ");
    scanf("%f", &n1);
    printf("Nota 2: ");
    scanf("%f", &n2);

    media = (n1 + n2) / 2;
    printf("Media Final: %.2f\n", media);

    if (media >= 7.0) {
        printf("Classificacao: APROVADO\n");
    } else if (media >= 4.0) {
        printf("Classificacao: EXAME FINAL\n");
    } else {
        printf("Classificacao: REPROVADO\n");
    }
}