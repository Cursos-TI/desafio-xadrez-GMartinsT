#include <stdio.h>

// Função recursiva para movimentar a Torre (direita)
void moverTorre(int passos) {
    if (passos <= 0) return;
    printf("  Direita\n");
    moverTorre(passos - 1);
}

// Função recursiva para movimentar a Rainha (esquerda)
void moverRainha(int passos) {
    if (passos <= 0) return;
    printf("  Esquerda\n");
    moverRainha(passos - 1);
}

// Função recursiva com loops aninhados para movimentar o Bispo (diagonal cima-direita)
void moverBispo(int passos) {
    if (passos <= 0) return;
    // Loop vertical
    for (int v = 0; v < 1; v++) {
        printf("  Cima\n");
        // Loop horizontal
        for (int h = 0; h < 1; h++) {
            printf("  Direita\n");
        }
    }
    moverBispo(passos - 1);
}

int main() {
    // Quantidade movimentos de cada peça
    const int movTorre   = 5;
    const int movBispo   = 5;
    const int movRainha  = 8;
    const int movCavaloV = 2;
    const int movCavaloH = 1;

    // Torre
    printf("Movimento da Torre (%d casas para a direita):\n", movTorre);
    moverTorre(movTorre);

    // Bispo
    printf("\nMovimento do Bispo (%d casas diagonal cima-direita):\n", movBispo);
    moverBispo(movBispo);

    // Rainha
    printf("\nMovimento da Rainha (%d casas para a esquerda):\n", movRainha);
    moverRainha(movRainha);

    // Cavalo
    printf("\nMovimento do Cavalo (2 cima + 1 direita):\n");
    // Variáveis indicando quantos movimentos já fizemos para cada direção
    int v = 0, h = 0;
    // While com condição múltipla
    while (v < movCavaloV || h < movCavaloH) {
        if (v < movCavaloV) {
            printf("  Cima\n");
            v++;
            continue;  // Volta ao início para relizar todos os movimentos verticais antes do movimento horizontal
        }
        if (h < movCavaloH) {
            printf("  Direita\n");
            h++;
        }
    }

    return 0;
}
