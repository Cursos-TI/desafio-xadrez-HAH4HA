#include <stdio.h>

int main() {
    // Quantidade de casas para cada movimento
    int casas_torre = 5;
    int casas_bispo = 5;
    int casas_rainha = 8;

    // ------------------------------
    // Movimento da Torre - 5 casas para a Direita (usando FOR)
    // ------------------------------
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casas_torre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // ------------------------------
    // Movimento do Bispo - 5 casas na Diagonal para Cima e Direita (usando WHILE)
    // ------------------------------
    printf("Movimento do Bispo:\n");
    int i = 1;
    while (i <= casas_bispo) {
        printf("Cima Direita\n");
        i++;
    }

    printf("\n");

    // ------------------------------
    // Movimento da Rainha - 8 casas para a Esquerda (usando DO-WHILE)
    // ------------------------------
    printf("Movimento da Rainha:\n");
    int j = 1;
    do {
        printf("Esquerda\n");
        j++;
    } while (j <= casas_rainha);

    printf("\n");

    // ------------------------------
    // Movimento do Cavalo - em "L" (2 para Baixo, 1 para Esquerda)
    // ------------------------------
    printf("Movimento do Cavalo:\n");

    // Definindo o número de movimentos de "L" que o Cavalo fará
    int movimentos_cavalo = 3;

    // Loop externo: faz o cavalo repetir o movimento em "L"
    for (int m = 1; m <= movimentos_cavalo; m++) {
        // Duas casas para baixo (usando while)
        int k = 1;
        while (k <= 2) {
            printf("Baixo\n");
            k++;
        }

        // Uma casa para esquerda
        printf("Esquerda\n");

        // Separador entre movimentos de "L"
        printf("---\n");
    }

    return 0;
}
