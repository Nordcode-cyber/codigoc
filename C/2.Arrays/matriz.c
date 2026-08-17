#include <stdio.h>

int main() {
    // 1. Declarar e inicializar una matriz de 3 filas x 3 columnas
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
       int matriz1[3][3] = {
        {-8, -2, -1},
        {-4, 8, 6},
        {-2, 4, 2}
    };
    int suma = 0;
    int producto=1;
    int sumaneg=0;
    int prodneg=1;

    // 2. Recorrer la matriz con dos ciclos anidados
    for (int i = 0; i < 3; i++) {       // Recorre las filas
        for (int j = 0; j < 3; j++) {   // Recorre las columnas
            suma += matriz[i][j];       // Acumula la suma
        }
    }
    printf("Matriz original:\n");
    for (int k = 0; k < 3; k++) {
        for (int l = 0; l < 3; l++) {
            printf("%d\t", matriz[k][l]); // '\t' añade una sangría para alinear las columnas
        }
        printf("\n"); // Salto de línea al terminar cada fila
    }
    // 3. Mostrar el resultado
     for (int m = 0; m < 3; m++) {       // Recorre las filas
        for (int n = 0; n < 3; n++) {   // Recorre las columnas
            producto *= matriz[m][n];       // Acumula la suma
        }
       
    }
    printf("La suma de todos los elementos es: %d\n", suma);
    printf("el producto de todos los elementos es: %d\n", producto);
      printf("Matriz original:\n");
    for (int a = 0; a < 3; a++) {
        for (int b = 0; b < 3; b++) {
            printf("%d\t", matriz1[a][b]); // '\t' añade una sangría para alinear las columnas
        }
        printf("\n"); // Salto de línea al terminar cada fila
    }
     for (int o = 0; o< 3; o++) {       // Recorre las filas
        for (int p = 0; p < 3; p++) {   // Recorre las columnas
            sumaneg += matriz1[0][p];       // Acumula la suma
        }
    }
     for (int d = 0; d < 3; d++) {       // Recorre las filas
        for (int e = 0; e < 3; e++) {   // Recorre las columnas
            prodneg *= matriz1[d][e];       // Acumula la suma
        }
       
    }
    printf("La suma de todos los elementos negativos de la matriz es: %d\n", sumaneg);
     printf("el productode todos los elementos negativos de la matriz es: %d\n", prodneg);
    return 0;
}