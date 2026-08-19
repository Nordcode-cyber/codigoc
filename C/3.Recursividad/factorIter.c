#include <stdio.h>

unsigned long long factorial_iterativo(int n) {
    if (n < 0) return 0; // El factorial no está definido para negativos
    
    unsigned long long resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int num = 3;
    printf("Factorial iterativo de %d: %llu\n", num, factorial_iterativo(num));
    return 0;
}