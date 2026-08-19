###                           Divide y Vencerás

El diseño de algoritmos basados en esta técnica consiste en transformar (dividir) un problema de tamaño n en problemas más
pequeños, de tamaño menor que n pero similares al problema original. De modo que resolviendo los subproblemas y combinando
las soluciones se puede construir fácilmente una solución del problema completo (vencerás). Un algoritmo “divide y
vence” puede ser definido de manera recursiva, de tal modo que se llama a sí mismo sobre un conjunto menor de elementos.
La condición para dejar de hacer llamadas es, normalmente, la obtención de un solo elemento (o muy pocos elementos) lo que
se denomina el caso base o caso trivial. El algoritmo general del método es el siguiente:
algoritmo DivideyVence(E <límites del problema a tratar>; ...)
inicio
${si <Caso trivial> entonces}$
${<Solución trivial>}$
${si_no}$
${<dividir el problema en subproblemas>}$
${desde <cada subproblemai> hacer}$
${DivideyVence(<Subproblemai>, ...)}$
${fin desde}$w
${<combinar las soluciones de los subproblemas>}$
${fin_si}$
${fin_algoritmo}$