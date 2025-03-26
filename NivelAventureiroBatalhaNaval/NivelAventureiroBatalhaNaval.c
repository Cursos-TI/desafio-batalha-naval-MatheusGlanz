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
    Tabuleiro[1][2] = 3; //coluna c, linha
    Tabuleiro[2][3] = 3; //coluna D, linha 
    Tabuleiro[3][4] = 3; //coluna E, linha 
    Tabuleiro[4][5] = 3; //coluna F, linha 
    Tabuleiro[3][6] = 3; //coluna G, linha 
    Tabuleiro[2][7] = 3; //coluna H, linha
    Tabuleiro[1][8] = 3; //coluna I, linha
    
    for (int i = 6; i < 10; i++){
        Tabuleiro[6][i] = 3; //coluna I, linha
    }

    /*3. Adicionando o número 3 na diagonal de A1 até J10
    for (int i = 0; i < 10; i++){
        Tabuleiro[i][i] = 3;
    }

     4. Adicionando o número 3 na diagonal de J1 até A10
    for (int i = 0; i < 10; i++){
        Tabuleiro[i][9-i] = 3;
    }*/

    //5. Imprimendo o tabuleiro
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