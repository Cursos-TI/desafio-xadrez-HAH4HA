#include <stdio.h>

// Função recursiva para o movimento da Torre
void mover_torre(int casas, int contador) {
    if (contador == casas) return;  // Condição de parada
    printf("Direita\n");
    mover_torre(casas, contador + 1);  // Chamada recursiva
}

// Função recursiva para o movimento do Bispo com loops aninhados
void mover_bispo(int casas, int vertical, int horizontal) {
    if (vertical == casas) return;  // Condição de parada para o movimento vertical
    for (int h = 0; h < horizontal; h++) {
        printf("Cima Direita\n");
    }
    mover_bispo(casas, vertical + 1, horizontal);  // Recursão no movimento vertical
}

// Função recursiva para o movimento da Rainha
void mover_rainha(int casas, int contador) {
    if (contador == casas) return;  // Condição de parada
    printf("Esquerda\n");
    mover_rainha(casas, contador + 1);  // Chamada recursiva
}

// Função para o movimento do Cavalo com loops aninhados e controle de fluxo
void mover_cavalo(int movimentos) {
    for (int m = 0; m < movimentos; m++) {
        for (int i = 0; i < 2; i++) {  // Duas casas para cima
            printf("Cima\n");
        }
        printf("Direita\n");  // Uma casa para a direita
        printf("---\n");
    }
}

int main() {
    // Quantidade de casas para cada movimento
    int casas_torre = 5;
    int casas_bispo = 5;
    int casas_rainha = 8;
    int movimentos_cavalo = 3;

    // ------------------------------
    // Movimento da Torre - Recursivo
    // ------------------------------
    printf("Movimento da Torre:\n");
    mover_torre(casas_torre, 0);
    printf("\n");

    // ------------------------------
    // Movimento do Bispo - Recursivo com Loops Aninhados
    // ------------------------------
    printf("Movimento do Bispo:\n");
    mover_bispo(casas_bispo, 0, 1);
    printf("\n");

    // ------------------------------
    // Movimento da Rainha - Recursivo
    // ------------------------------
    printf("Movimento da Rainha:\n");
    mover_rainha(casas_rainha, 0);
    printf("\n");

    // ------------------------------
    // Movimento do Cavalo - Loops Aninhados
    // ------------------------------
    printf("Movimento do Cavalo:\n");
    mover_cavalo(movimentos_cavalo);

    return 0;
}
