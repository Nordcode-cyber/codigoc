#include <stdio.h>
#include <math.h>

int main(){
	float perimetro,superficie;
	float pi=3.141592;
	float radio;
	//para decimales %.10f
    printf("Escribe el radio del circulo\n");
    scanf("%f",&radio);
    superficie = pi*(pow(radio, 2));
    perimetro = pi*2*radio;
    printf("\nla superficie del circulo es: %.10f",superficie);
	printf("\nEl perimetro del circulo es: %.10f",perimetro);
    return 0;
    
    
    
}