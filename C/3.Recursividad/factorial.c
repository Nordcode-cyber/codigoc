#include <stdio.h>

unsigned long long factorial_recursivo(int n) {
    if (n < 0) return 0;
    if (n == 0 || n == 1) return 1; // Caso base
    
    return n * factorial_recursivo(n - 1);
}

int main() {
    int num = 12;
    printf("Factorial recursivo de %d: %llu\n", num, factorial_recursivo(num));
    return 0;
}