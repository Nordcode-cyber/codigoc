#include<stdio.h>
int main(){
    int n1, n2, suma=0, resta=0,mult=0,div=0;
    printf("ingrese 2 numeros: ");
    scanf("%i %i",&n1,&n2);
    suma = n1 + n2;
    resta = n1 - n2;
    mult = n1 * n2;
    div = n1 / n2;
    printf("la suma es: %i\n",suma);
    printf("la resta es: %i\n",resta);
    printf("la multiplicacion es: %i\n",mult);
    printf("la division es: %i\n",div);
    return 0;
    //Se produjo una excepción.
    //Arithmetic exception divisio Zero


}