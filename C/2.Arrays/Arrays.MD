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

#####                                       Expresion entera

Donde expresión entera es una expresión cuyo valor debe estar entre ${0}$ y ${numeroDeElementos}$ ${-1}$, ya que C no verifica
que las expresiones de los índices de los array estén dentro del rango declarado. El almacenamiento de los datos de un array
se realiza en bloques de memoria contigua a partir de la dirección base inicial 0. Cualquier array que sea declarado en C debe
ser inicializado mediante sentencias explícitas de asignación o bien en la propia declaración.

######                                      Sentencias para declarar Arrays

```float num[5] = {11,21,31,41,51,60};```
```int n[] = {3, 4, 5};```
```char Nombre [ ] = {‘L’,’u’,’c’,’a’,’s’};```