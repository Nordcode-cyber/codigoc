###                                         Backtracking

Es un método de resolución de problemas basado en el tanteo sistemático (prueba y error) y en el que la solución del problema
se divide en pasos. La solución del paso i-ésimo se resuelve en función del paso i-ésimo + 1 . Las técnicas de
Backtracking se pueden emplear con la finalidad de encontrar una solución, todas las soluciones o la solución óptima al problema
planteado. Un algoritmo que devuelve una solución es:
procedimiento Ensayar(E entero: i; E/S logico: exito; ...)
${inicio}$
${<inicializa las posibilidades>}$
${mientras <queden posibilidades> y no exito hacer}$
${<toma la siguiente posibilidad>}$
${si <la posibilidad es aceptable> entonces}$
${<anota la posibilidad como parte de la solución>}$
${si <se encontró una solución general> entonces}$
${exito ← verdad}$
${si_no}$
${ensayar(i + 1, éxito, ...)}$
${fin_si}$
${si no exito entonces}$
${<desanota la posibilidad como parte de la solución>}$
${fin_si}$
${fin_si}$
${fin_mientras}$
${fin_procedimiento}$