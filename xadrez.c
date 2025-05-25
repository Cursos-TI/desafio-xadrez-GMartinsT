#include <stdio.h>

int main() {
    // Quantidade movimentos de cada peça
    const int movTorre  = 5;
    const int movBispo  = 5;
    const int movRainha = 8;

    int i;

    // Movimentação da torre
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (i = 0; i < movTorre; i++) {
        printf("  Direita\n");
    }

    // Movimentação do bispo
    printf("\nMovimento do Bispo (5 casas diagonal cima-direita):\n");
    i = 0;
    while (i < movBispo) {
        printf("  Cima, Direita\n");
        i++;
    }

    // Movimentação da rainha
    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    i = 0;
    do {
        printf("  Esquerda\n");
        i++;
    } while (i < movRainha);

    return 0;
}
