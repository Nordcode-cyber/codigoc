#include <stdio.h>
int main(){
int n;
double sumaimpares(int);
printf("Escriba un número entero positivo: \n");
scanf("%d", &n);
printf("Suma de los %d primeros impares: %lf\n", n, sumaimpares(n));
}
double sumaimpares(int n){
if(n <= 1)
return 1.0;
return ((2*n - 1) + sumaimpares(n - 1));
}