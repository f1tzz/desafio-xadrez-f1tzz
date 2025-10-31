#include <stdio.h>

int main() {
    // Definição das quantidades de casas para cada peça
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    printf("=== Movimentando as Peças do Xadrez ===\n\n");

    // -------------------------
    // 1. Torre -> FOR
    // -------------------------
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita (%d casa)\n", i);
    }

    printf("\n");

    // -------------------------
    // 2. Bispo -> WHILE
    // -------------------------
    printf("Movimento do Bispo (5 casas na diagonal: cima e direita):\n");
    int i = 1;
    while (i <= casasBispo) {
        printf("Cima, Direita (%d casa)\n", i);
        i++;
    }

    printf("\n");

    // -------------------------
    // 3. Rainha -> DO-WHILE
    // -------------------------
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    int j = 1;
    do {
        printf("Esquerda (%d casa)\n", j);
        j++;
    } while (j <= casasRainha);

    printf("\n=== Fim da Simulação ===\n");

    return 0;
}