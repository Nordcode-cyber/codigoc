###                                     Arrays o Vectores(listas y tablas)

una estructura contiene múltiples variables, que pueden ser de tipos diferentes lo que permite la creación de programas potentes,
tales como bases de datos u otras aplicaciones que requieran grandes cantidades de datos. Un tipo de dato enumerado es una colección
de elementos con nombre que tienen valores enteros equivalentes. Este capítulo examina examina el tipo array o vector,
(lista o tabla), estructuras, uniones, enumeraciones y tipos definidos por el usuario que permite a un programador crear nuevos
tipos de datos.

####                                         Array Unidimensional

Un array (lista o tabla) es una secuencia de datos del mismo tipo y cuyas componentes se numeran consecutivamente desde
las posiciones ${0}$, ${1}$, ${2}$, ${3}$ ...${n}$, hasta una constante entera positiva máxima. Si el nombre del array es a, 
entonces a[0] es el nombre del elemento que está en la posición 0, a[1] es el nombre del elemento que está en la posición 1, etc. 
En general, el elemento i-ésimo está en la posición i-1. La sintaxis de declaración de un array de una dimensión constante determinada es:
`tiponombreArray[numeroDeElementos];`
El acceso a los elementos de un array se realiza mediante:
`nombreArray[expresiónentera];`

#####                                       Expresión entera

Donde expresión entera es una expresión cuyo valor debe estar entre ${0}$ y ${numeroDeElementos}$ ${-1}$, ya que C no verifica
que las expresiones de los índices de los array estén dentro del rango declarado. El almacenamiento de los datos de un array
se realiza en bloques de memoria contigua a partir de la dirección base inicial 0. Cualquier array que sea declarado en C debe
ser inicializado mediante sentencias explícitas de asignación o bien en la propia declaración.

######                                      Sentencias para declarar Arrays

```float num[5] = {11,21,31,41,51,60};```
```int n[] = {3, 4, 5};```
```char Nombre [ ] = {‘L’,’u’,’c’,’a’,’s’};```
#####                                            Arrays Multidimensionales

Los Arrays vistos anteriormente se conocen como Arrays unidimensionales (una sola dimensión) y se caracterizan por tener un solo subíndice. 
Estos Arrays se conocen también por el término listas. Los arrays multidimensionales son aquellos que tienen más de una dimensión y, 
en consecuencia, mas de un índice. Los más usuales son los de dos dimensiones, conocidos también por el nombre de tablas o matrices. 
Sin embargo, es posible crear arrays de tantas dimensiones como requieran sus aplicaciones, ya sean tres, cuatro o más.
Un array de dos dimensiones (m × n) equivale a una tabla con múltiples filas y múltiples columnas.

${<tipo de}$ ${ dato }$ ${elemento>}$ ${<nombre-array>}$ ${<[N1]>}$  ${<[N2]>}$  ${<[N3]>}$ 

####                                          Declaración Arrays Multidimensionales
Los arrays multidimensionales son aquellos que tienen más de una dimensión y, en consecuencia, más de un índice. Los arrays
más usuales son los de dos dimensiones, conocidos también por el nombre de tablas o matrices. Sin embargo, es posible crear
arrays de tantas dimensiones como requieran sus aplicaciones, esto es, tres, cuatro o más dimensiones. La sintaxis para la
declaración de un array de tres dimensiones es:

Las siguientes sentencias declaran arrays multidimensionales.
float mat[25][80]; /* matriz bidimensional real*/
int p[6][8][10]; /* array de tres dimensiones de tipo entero*/
int e[4][30][2][5]; /* array de cuatro dimensiones de tipo entero*/