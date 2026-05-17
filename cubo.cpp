#include <stdio.h>
#include <math.h>
int main(){
float lado,area, volumen;
printf("\n Escribe lado del cubo: ");
scanf("%f",&lado);
area = (6*pow(lado, 2));
volumen = pow(lado, 3);
printf("\nEl area del cubo es: %.2f",area);
printf("\nEl volumen del cubo es: %.2f",volumen);
return 0;
	
	
	
}