#include <stdio.h>

int main() {

    int Tabuleiro [10][10];

    //1. Inicializando o tabuleiro
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            Tabuleiro[i][j] = 0;
        }
    }
    //2. Incluido o navio no tabuleiro 
    Tabuleiro[2][3] = 3; //coluna D, linha 3
    Tabuleiro[2][4] = 3; //coluna E, linha 3
    Tabuleiro[2][5] = 3; //coluna F, linha 3

    //2. Imprimendo o tabuleiro
    printf("\n### Tabuleiro Batalha Naval ###\n");
    
         printf("  A B C D E F G H I J\n");
    for (int i = 0; i < 10; i++){
        printf("%d", i + 1);
        for (int j = 0; j < 10; j++){
            printf(" %d", Tabuleiro[i][j]);
        }
        printf("\n");
    }
     
    return 0;
}