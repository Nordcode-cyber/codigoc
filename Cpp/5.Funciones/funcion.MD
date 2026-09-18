Estructura de una función
Una función es un conjunto de sentencias —con un nombre común— que se pueden llamar desde cualquier parte de un programa.
En C++ todas las funciones son externas o globales, es decir, pueden ser llamadas desde cualquier punto del programa.
Las funciones en C++ no se pueden anidar (no puede declararse una función dentro de otra función). La estructura de una
función en C++ se muestra a continuación:
tipo_de_retorno nombre_Función (Lista_de_Parámetros_Formales)
{
cuerpo de la función
return expresión;
}
tipo_de_retorno Tipo de valor devuelto por la función o la palabra reservada void si la función
no devuelve ningún valor.
nombre_Función Identificador o nombre de la función.
Lista_de_Parámetros_Formales Lista de declaraciones de los parámetros de la función separados por comas.
expresión Valor que devuelve la función.
Los aspectos más sobresalientes en el diseño de una función son: