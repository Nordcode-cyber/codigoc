###                                  Repetición: el bucle For
El bucle ${for}$ es el más adecuado para implementar bucles controlados por contador que son bucles en los que un conjunto de
sentencias se ejecutan una vez por cada valor de un rango especificado, de acuerdo al algoritmo: por cada valor de una variable
contador de un rango específico: ejecutar sentencias.
Sintaxis
``` (Inicialización; CondiciónIteración; Incremento)```
      ```Sentencias;```
El bucle ${for}$ contiene las cuatro partes siguientes:
• La parte de Inicialización inicializa las variables de control del bucle.
• La parte de Condición de Iteración contiene una expresión lógica que hace que el bucle realice las iteraciones de las sentencias.
• La parte de Incremento incrementa la variable o variables de control del bucle.
• Las Sentencias, acciones o sentencias que se ejecutarán por cada iteración del bucle.
###                                  Repeticion Ascedente

Bucle ${for}$ ascendente que escribe los 5 primeros números naturales, su cuadrado y su cubo. Se inicializa
la variable entera ${n}$ a 1 y mientras el valor de ${n}$ sea menor o igual a 5 se escribe el número ${n}$, su cuadrado y
su cubo. Posteriormente se incrementa en una unidad el valor de ${n}$.
```#include <cstdlib>```
```#include <iostream>```
```using namespace std;```
```int main(int argc, char *argv[]){```
```cout << "n n*n n*n*n" << endl;```
```for (int n = 1; n <= 5; n++)```
```cout << n << '\t' << n * n << '\t' << n * n* n <<endl;```
```system("PAUSE");```
```return EXIT_SUCCESS;```
```}```