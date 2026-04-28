#include <stdio.h> //corrigido, trocando "" por <>

int main() {
    float nota1, nota2, media; // corrigido, adicionando ";"

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", nota2);

    media = nota1 + nota2 / 2;

    if (media >= 6) { // corrigido, trocando "=" por ">=" para manter a lógica
        printf("Aluno aprovado\n");
    } else {
        printf("Aluno reprovado\n");
    }

    return 0;
}