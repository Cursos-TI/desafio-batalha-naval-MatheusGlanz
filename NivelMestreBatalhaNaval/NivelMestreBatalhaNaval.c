#include <stdio.h>

#define Linha 10
#define Coluna 10

int main() {
    int tabuleiro[Linha][Coluna];

    // 1. Inicializando o tabuleiro
    for (int i = 0; i < Linha; i++){
        for (int j = 0; j < Coluna; j++){
            tabuleiro[i][j] = 0;
        }
    }

    // Habilidade de Cone
    tabuleiro[6][7] = 1; // linha 7, coluna 8
    for (int j = 6; j <= 8; j++) {
        tabuleiro[7][j] = 1; // linha 8, coluna 7 a 9
    }
    for (int j = 5; j <= 9; j++) {
        tabuleiro[8][j] = 1; // linha 9, coluna 6 a 9
    }
    // Habilidade Cruz
    for (int i = 0; i <= 2; i++) {
        tabuleiro[i][2] = 3; // linha 1 a 4, coluna 2 
    }
    for (int j = 0; j <= 4; j++) {
        tabuleiro[1][j] = 3; // linha 5, coluna 1 a 4
    }
    // Habilidade Octaedro
    for (int i = 3; i <= 5; i++) {
        tabuleiro[i][5] = 2; // linha 6 a 8, coluna 1
    }
    for (int j = 4; j <= 6; j++) {
        tabuleiro[4][j] = 2; // linha 7, coluna 5 a 7   
    }

    
    // Imprimendo o tabuleiro
    printf("\n### Tabuleiro Batalha Naval ###\n");
    printf("Suas Habilidades: Cone, Cruz e Octaedro\n");
    printf("  A B C D E F G H I J\n");
    for (int i = 0; i < Linha; i++){
        printf("%d", i + 1);
        for (int j = 0; j < Coluna; j++){
            printf(" %d", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}