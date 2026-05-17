#include <stdio.h>
#include <math.h>

int main() {
    float pi=3.141592;
    float radio,altura, area, volumen;
    printf("Escribe la altura del cilindro\n");
    scanf("%f",&altura);

    printf("Escribe el radio del cilindro\n");
    scanf("%f",&radio);
	
//pow(2.0, 3.0)
	//para decimales %.10f
    volumen = (pi *(pow(radio, 2)*altura));
    area =(2*pi*(radio + altura));
    printf("\nEl area del cilindro es: %.10f",area);
	printf("\nEl volumen del cilindro es: %.10f",volumen);
    return 0;
}