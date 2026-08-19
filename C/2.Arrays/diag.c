#include <stdio.h>

#define N 3 // Tamaño de la matriz cuadrada (N x N)
#define O 4

int main() {
    int matriz[N][N] = {
        {3, 2, 3},
        {4, -2, 6},
        {7, 8, 9}
    };
     int matriz2[O][O] = {
        {3, 2, 3, -2},
        {4, -3, -4, 1},
        {-7, 8, 9,12},
        {11, 9,-6, 6}
    };

    int suma = 0;
    int sumasecund=0;
    int suma1=0;
    int sumasecund1=0;
    printf("Matriz 1 original:\n");
    for (int g = 0; g < 3; g++) {
        for (int h = 0; h < 3; h++) {
            printf("%d\t", matriz[g][h]); // '\t' añade una sangría para alinear las columnas
        }
        printf("\n"); // Salto de línea al terminar cada fila
    }
     // Recorremos la diagonal principal
    for (int i = 0; i < N; i++) {
        suma += matriz[i][i];
        sumasecund +=matriz[i][N-1-i];
    }
     for (int j = 0; j < O; j++) {
        suma1 += matriz2[j][j];
        sumasecund1 +=matriz2[j][O-1-j];
    }
    printf("La suma de la diagonal principal es: %d\n", suma);
    printf("La suma de la diagonal secundaria es: %d\n", sumasecund);
    printf("Matriz 2 original:\n");
    for (int e= 0; e < 4; e++) {
        for (int f = 0; f < 4; f++) {
            printf("%d\t", matriz2[e][f]); // '\t' añade una sangría para alinear las columnas
        }
        printf("\n"); // Salto de línea al terminar cada fila
    }
    printf("La suma de la diagonal principal de la matriz 2 es: %d\n", suma1);
    printf("La suma de la diagonal secundaria de la matriz 2 es: %d\n", sumasecund1);

    return 0;
}