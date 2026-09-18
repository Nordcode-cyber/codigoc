###                         Estructura de una función

Una función es un conjunto de sentencias —con un nombre común— que se pueden llamar desde cualquier parte de un programa.
En C++ todas las funciones son externas o globales, es decir, pueden ser llamadas desde cualquier punto del programa.
Las funciones en C++ no se pueden anidar (no puede declararse una función dentro de otra función). La estructura de una
función en C++ se muestra a continuación:
```tipo_de_retorno nombre_Función (Lista_de_Parámetros_Formales){```
```sentencias  de la función```
```return expresión;```
```}```
tipo_de_retorno Tipo de valor devuelto por la función o la palabra reservada ${void}$ si la función
no devuelve ningún valor.
nombre_Función Identificador o nombre de la función.
Lista_de_Parámetros_Formales Lista de declaraciones de los parámetros de la función separados por comas.
expresión Valor que devuelve la función.
######           Los aspectos más sobresalientes en el diseño de una función son:

${Tipo_ de_ retorno}$. Es el tipo de dato que devuelve la función ${C++}$. El tipo debe ser uno de los tipos simples de ${C++}$,
tales como ${int}$, ${char}$ o ${float}$, o un puntero a cualquier tipo C++, o un tipo struct, previamente declarado (véase Capítulo
8). Si no devuelve ningún valor el tipo es ${void}$.
• ```nombre_Función```. Un nombre de una función comienza con una letra o un subrayado (_) y puede contener tantas letras,
números o subrayados como desee.
• ```Lista_ de_ Parámetros_ Formales```. Es una lista de parámetros con tipos que utilizan el formato siguiente: 
tipo1 parámetro1, tipo2 parámetro2, ... tipo(n) parametro(n).
• Cuerpo de la función. Se encierra entre llaves de apertura ${({)}$ y cierre ${(})}$.
• Paso de parámetros. Posteriormente se verá que el paso de parámetros en C++ se puede hacer por valor y por referencia.
• Declaración local. Las constantes, tipos de datos y variables declaradas dentro de la función son locales a la misma y
no perduran fuera de ella.
• Valor devuelto por la función. Una función puede devolver un único valor. Mediante la palabra reservada return se puede
devolver el valor de la función. Una función puede tener cualquier número de sentencias return. Tan pronto como
el programa encuentra cualquiera de las sentencias return, se retorna a la sentencia llamadora.
• La llamada a una función. Una llamada a una función redirigirá el control del programa a la función nombrada. Debe
ser una sentencia o una expresión de otra función que realiza la llamada. Esta sentencia debe ser tal que debe haber coincidencia
en número, orden y tipo entre la lista de parámetros formales y actuales de la función.
• No se pueden declarar funciones anidadas. Todo código de la función debe ser listado secuencialmente, a lo largo de todo
el programa. Antes de que aparezca el código de una función, debe aparecer la llave de cierre de la función anterior.