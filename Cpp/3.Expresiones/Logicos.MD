###                                         Operadores   Logicos C++

Los operadores lógicos se utilizan con expresiones para devolver un valor verdadero (cualquier entero distinto de cero) o un
valor falso (0). Los operadores lógicos de C son: not (!), and (&&) y or(||). El operador unitario lógico ! (not, no) produce
falso (cero) si su operando es verdaderos (distinto de cero) y viceversa. El operador binario lógico && (and, y) produce
verdadero sólo si ambos operandos son verdaderos (no cero); si cualquiera de los operandos es falso produce falso. El operador
binario lógico || (or, o) produce verdadero si cualquiera de los operandos es verdadero (distinto de cero) y produce falso
sólo si ambos operandos son falsos.
La precedencia de los operadores es: los operadores matemáticos tienen precedencia sobre los operadores relacionales, y
los operadores relacionales tienen precedencia sobre los operadores lógicos.
####                                         prioridad sobre operadores logicos

El operador *!* (not) tiene prioridad más alta que *&&* (and), que a su vez tiene mayor prioridad que *||* or. La asociatividad,
es de izquierda a derecha.
