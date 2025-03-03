#include <stdio.h>

// Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

#define TAMANHO 10
#define NAVIO 3
#define TAMANHO_NAVIO 3

int main() {
    // Tabuleiro (10x10)
    int tabuleiro[TAMANHO][TAMANHO] = {0};

    // Coordenadas dos navios
    int LINHANavioH = 2, COLUNANavioH = 1;  // Navio HORIZONTAL (linha 3)
    int LINHANavioV = 5, COLUNANavioV = 7;  // Navio vertical (coluna H)
    int LINHANavioD1 = 3, COLUNANavioD1 = 3;  // Navio diagonal (↘)
    int LINHANavioD2 = 7, COLUNANavioD2 = 8;  // Navio diagonal (↙)

    // NAVIO horizontal (03 casas)
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[LINHANavioH][COLUNANavioH + i] = NAVIO;
    }
    // NAVIO vertical (03 casas)
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[LINHANavioV + i][COLUNANavioV] = NAVIO;
    }
    // NAVIO diagonal - (esquerda para direita)
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[LINHANavioD1 + i][COLUNANavioD1 + i] = NAVIO;
    }
    // NAVIO diagonal - (direita para esquerda)
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[LINHANavioD2 - i][COLUNANavioD2 - i] = NAVIO;
    }

    // Tabuleiro (Incrementado com legenda)
    printf("\n|----A B C D E F G H I J----|\n");
    printf("-----------------------------\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("%2d|-", i + 1);  // Para exibir Nº linha
        for (int j = 0; j < TAMANHO; j++) {
            printf(" %d", tabuleiro[i][j]);
        }
        printf("\n"); // Cada linha do tabuleiro implementada
    }
    return 0;
}


    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0