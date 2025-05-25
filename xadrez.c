#include <stdio.h>

int main() {
    // Quantidade movimentos de cada peça
    const int movTorre   = 5;
    const int movBispo   = 5;
    const int movRainha  = 8;
    const int movCavaloV = 2;
    const int movCavaloH = 1;

    int i, j;

    // Movimentação da torre
    printf("Movimento da Torre (%d casas para a direita):\n", movTorre);
    for (i = 0; i < movTorre; i++) {
        printf("  Direita\n");
    }

    // Movimentação do bispo
    printf("\nMovimento do Bispo (%d casas diagonal cima-direita):\n", movBispo);
    i = 0;
    while (i < movBispo) {
        printf("  Cima, Direita\n");
        i++;
    }

    // Movimentação da rainha
    printf("\nMovimento da Rainha (%d casas para a esquerda):\n", movRainha);
    i = 0;
    do {
        printf("  Esquerda\n");
        i++;
    } while (i < movRainha);

    // Movimentação do cavalo
    // O cavalo deve se mover em L sendo duas casas para baixo e uma para a esquerda
    printf("\nMovimento do Cavalo (2 baixo + 1 esquerda):\n");
    // Esse for engloba o movimento do cavalo como um todo, incluindo seus movimentos verticais e horizontais
    for (i = 0; i < 1; i++) {
        // Movimento vertical (2 casas para baixo)
        j = 0;
        while (j < movCavaloV) {
            printf("  Baixo\n");
            j++;
        }
        // Movimento horizontal (1 casa para a esquerda)
        j = 0;
        while (j < movCavaloH) {
            printf("  Esquerda\n");
            j++;
        }
    }

    return 0;
}
