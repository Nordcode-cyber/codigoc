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
57