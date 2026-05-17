###                                Archivo .c

```#include <iostream.h>```      *archivo de cabecera iostream.h( o <iostream>)*
```int main(){  ```              *cabecera de la funcion* main *nombre de la funcion*
```   ... ```                      ... *sentencias de la funcion*
```}```

####                               #include <iostream>    

La directiva #include <iostream> se refiere a la inclusión del archivo externo denominado iostream.h en el que se declaran las funciones y datos que contiene iostream, entre otros, la información relativa al objeto cout. using namespace std sirve para usar las declaraciones estándar del espacio nombrado (consola) . Las dobles barras inclinadas (//) sirven para indicar comentarios que son ignorados por el compilador. La sentencia main( ) es obligatoria en cada programa C++, e indica el comienzo del programa. Las llaves { ... } encierran el cuerpo de la función main( ) y son necesarias en todos los programas C++.
Los archivos de cabecera en C++ tienen normalmente una extensión .h y los archivos fuente, la extensión .cpp.

####                                Comentarios

```#include <iostream.h>``` *//archivo cabecera donde se encuentra cout*
```using namespace std;``` *//usa la consola como dispositivo estándar*
```int main(int argc, char *argv[]){``` *//número de argumentos y cuales*
```cout << " Hola mundo cruel";``` // visualiza el mensaje
```system("PAUSE");``` // archivo de ejecución retenido hasta pulsar tecla
```return EXIT_SUCCESS```; // retorna el control al sistema operativo.
```}```
*este programa sólo muestra en pantalla el mensaje*
*//hola mundo cruel*
####                                Tipos de datos


|Tipo básico |	Tipo	|Ejemplo	|Tamaño en bytes|	Rango min	|Rango max  |
|--------------------------------------------------------------------------------
|Carácter    |	Char	|   ‘c’	    |     1	        |      0	    |  255      |
|Entero      |  short   |   -15     |     2         |     -128      |  127      |
|Entero      |  int     |  1024     |     2         |     -32768    |  32767    |
|Entero      | unsig int|  42325    |     2         |      0        |  65535    |
|Entero      |   long   | 262144    |     4         | -2147483648   |2147483637 |
|Real        |   float  |    10.5   |     4         | 3.4*(10–38)   | 3.4*(1038)|
|Real        |   double |   0.0045  |     8         | 2.7*(10–308)  |2.7*(10308)|

