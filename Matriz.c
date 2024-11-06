#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

void printMatrix(int M[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf(" %d ", M[i][j]);
        }
        printf(" \n");
    }
}

void trocalinha(int M[SIZE][SIZE], int lin1, int lin2) {
    for (int j = 0; j < SIZE; j++) {
        int temp = M[lin1][j];
        M[lin1][j] = M[lin2][j];
        M[lin2][j] = temp;
    }
}

void trocacoluna(int M[SIZE][SIZE], int col1, int col2) {
    for (int i = 0; i < SIZE; i++) {
        int temp = M[i][col1];
        M[i][col1] = M[i][col2];
        M[i][col2] = temp;
    }
}

void diagonal(int M[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        int temp = M[i][i];
        M[i][i] = M[i][SIZE - 1 - i];
        M[i][SIZE - 1 - i] = temp;
    }
}

void somacoluna(int M[SIZE][SIZE], int col1, int col2, int resultCol) {
    for (int i = 0; i < SIZE; i++) {
        M[i][resultCol] = M[i][col1] + M[i][col2];
    }
}

void multiplicalinha(int M[SIZE][SIZE], int lin1, int lin2, int resultlin) {
    for (int j = 0; j < SIZE; j++) {
        M[resultlin][j] = M[lin1][j] * M[lin2][j];
    }
}

int main (void){

 int M[10][10]= {{5, 4, 9, 4, 0, 1, 7, 9, 8, 4},
{2, 2, 7, 5, 2, 2, 1, 4, 5, 9},
{9, 1, 5, 6, 5, 0, 3, 0, 6, 6},
{7, 0, 2, 3, 7, 4, 2, 2, 7, 3},
{5, 3, 3, 1, 9, 8, 4, 2, 4, 4},
{3, 8, 4, 2, 3, 9, 5, 2, 1, 2},
{9, 7, 0, 9, 4, 7, 2, 0, 2, 5},
{1, 9, 0, 8, 0, 6, 3, 5, 9, 9},
{0, 6, 4, 7, 5, 5, 6, 1, 8, 4},
{3, 4, 9, 4, 3, 2, 0, 3, 0, 5},
};


    printf("Matriz original:\n");

    printMatrix(M);


    trocalinha(M, 1, 7);


    trocacoluna(M, 3, 9);


    diagonal(M);


    somacoluna(M, 4, 5, 0);


    multiplicalinha(M, 2, 3, 8);


    printf("Matriz resultante:\n");
    printMatrix(M);


return 0;
}
