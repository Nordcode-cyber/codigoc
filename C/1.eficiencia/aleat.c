#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // 1. Inicializar la semilla con el tiempo actual
    srand(time(NULL));

    // 2. Generar un número entre 1 y 100 usando el operador módulo (%)
    int numero_aleatorio = (rand() % 100) + 1;

    printf("Número aleatorio: %d\n", numero_aleatorio);
    return 0;
}