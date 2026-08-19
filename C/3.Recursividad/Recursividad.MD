###                                       Algoritmo Recursivo

• Una función tiene recursividad directa cuando se llama a sí misma dentro de su propia definición.
• Una función tiene recursividad indirecta si llama a otra función que, a su vez, contiene una referencia directa o indirecta
a la primera.
• El cuerpo de una función recursiva debe tener una o varias instrucciones selectivas donde establece para los casos generales
las soluciones generales, y para los casos triviales las soluciones triviales.
• Cada llamada recursiva debe disminuir el tamaño del ejemplar de entrada de tal manera que se acerque a la(s) solución(es)
trivial(es).
• Cada vez que se llama a una función recursiva todos los valores de los parámetros formales y variables locales son almacenados
en una pila.
• Cuando termine de ejecutarse la función recursiva retorna al nivel inmediatamente anterior. En la pila se recuperan los
valores tanto de los parámetros como de las de variables locales, y se continúa con la ejecución de la siguiente instrucción
a la llamada recursiva.
####                            Evitar uso de la recursividad en los siguientes casos

Las funciones recursivas que tienen explosión exponencial en cuanto a tiempo de ejecución pero que el número de subproblemas
esencialmente distintos que deben resolverse es de tiempo polinomial deben evitarse. Un ejemplo clásico y sencillo viene
dado por la función de Fibonacci que se define de la siguiente forma;
Fibonacci(n) = Fibonacci(n-1) + Fibonacci(n - 2) y Fibonacci(0) = 0 , Fibonacci(1) = 1.
que se repiten los cálculos de los valores inferiores de n lo que hace que su tiempo sea ${exponencial}$.
En general siempre que una función recursiva repita cálculos pueden almacenarse los resultados intermedios permitiendo 
bajar la complejidad algorítmica a tiempos asintóticamente inferiores. 
Es en estos casos cuando nunca conviene usar un diseño recursivo.