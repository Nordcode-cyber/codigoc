###                                     Boolean

La mayoría de los compiladores de C++ incorporan el tipo de dato bool cuyos valores posibles son: “verdadero” (true) y
falso” (false). El tipo bool proporciona la capacidad de declarar variables lógicas, que pueden almacenar los valores verdadero
y falso. Si en el compilador de C++ no está disponible el tipo bool, deberá utilizar el tipo de dato int para representar
el tipo de dato bool. C++ utiliza el valor entero 0 para representar falso y cualquier valor entero distinto de cero (1) para representar verdadero. 
De esta forma, se pueden utilizar enteros para escribir expresiones lógicas de igual forma
que se utiliza el tipo bool.

######                          uso del tipo bool
```#include <iostream>```
```void main(){```
```bool b1, b2=false, b3=true;```
```int il =b3,i4 =10;```
```cout <<" b2: " <<b2 <<endl;```
```...```
```}```