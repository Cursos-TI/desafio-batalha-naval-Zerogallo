#include <stdio.h>

int main() {

    // Declaração de uma matriz 10x10 para o tabuleiro
    int tabuleiro[10][10] = {0};  // Inicializa todas as posições com 0

    // Preenchendo algumas áreas com 3 (posição navio)

    //Navio verticalmente
    tabuleiro[2][3] = 3;  // Área com navio na linha 2, coluna D
    tabuleiro[2][4] = 3;  // Área com navio na linha 2, coluna E
    tabuleiro[2][5] = 3;  // Área com navio na linha 2, coluna F

    //Navio horizontalmente
    tabuleiro[6][8] = 3;  // Área com navio na linha 7, coluna I
    tabuleiro[7][8] = 3;  // Área com navio na linha 8, coluna I
    tabuleiro[8][8] = 3;  // Área com navio na linha 9, coluna I

    
    printf("Tabuleiro Batalha Naval\n");
    printf("\n");

    // Imprimir as letras das colunas
    printf("   ");
    for (char c = 'A'; c <= 'J'; c++) {
        printf("%c ", c);  // Colunas A, B, C, ..., J
    }
    printf("\n");

    // Imprimir as linhas numeradas
    for (int i = 0; i < 10; i++) {
        printf("%2d ", i + 1);  // Exibe as linhas numeradas de 1 a 10
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);  // Imprime os valores da matriz
        }
        printf("\n");
    }

    return 0;
}
