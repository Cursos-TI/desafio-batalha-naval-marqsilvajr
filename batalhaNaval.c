#include <stdio.h>

int main() {
    // Tabuleiro (10x10)
    int tabuleiro[10][10] = {0};

    // Coordenadas dos navios
    int LINHANavioH = 2, COLUNANavioH = 4; // Navio horizontal começa na linha 2, coluna 4
    int LINHANavioV = 5, COLUNANavioV = 7; // Navio vertical começa na linha 5, coluna 7
    int tamanhoNavio = 3; // Tamanho fixo dos navios

    // Navio horizontal (03 casas)
    for (int i = 0; i < 3; i++) {
        tabuleiro[LINHANavioH][COLUNANavioH + i] = 3;
    }
    // Navio vertical (03 casas)
    for (int i = 0; i < 3; i++) {
        tabuleiro[LINHANavioV + i][COLUNANavioV] = 3;
    }

    // Tabuleiro (Incrementado com legenda)
    printf("\n|----A B C D E F G H I J----|\n");
    printf("-----------------------------\n");
    for (int i = 0; i < 10; i++) {
        printf("%2d|-", i + 1);  // Para exibir Nº linha
        for (int j = 0; j < 10; j++) {
            printf(" %d", tabuleiro[i][j]);
        }
        printf("\n"); // Cada linha do tabuleiro implementada
    }
    return 0;
}


    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

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