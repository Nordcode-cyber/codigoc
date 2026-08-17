###                             Funciones de Complejidad de algoritmos

La complejidad algorítmica representa la cantidad de recursos (temporales) que necesita un algoritmo para resolver,
un problema y por tanto permite determinar la eficiencia de dicho algoritmo. Los criterios que se van a emplear para
evaluar la complejidad algorítmica no proporcionan medidas absolutas sino, medidas relativas al tamaño del problema.
La medida del tiempo tiene que ser independiente:
de la máquina del lenguaje de programación, del compilador, de cualquier otro elemento hardware o software que influya en
el análisis. Para conseguir esta independencia una posible medida abstracta puede consistir en determinar
cuantos pasos se efectúan al ejecutarse el algoritmo.
> [Si el tamaño de los datos es grande lo que importa es el comportamiento asintótico de la eficiencia]: 

###                          El coste depende del tamaño de los datos

El tiempo requerido por una algoritmo es función del tamaño de los datos. Por esta razón la complejidad temporal se expresa de
la siguiente forma:
  
  ${T(n)}$
Dependiendo del problema, el tamaño del dato representa cosas diferentes:
el número en sí, el número de dígitos o elementos que lo compone.
####                        Tabla Comparativa de funciones de Complejidad


| ${n}$ | ${log(n)}$ | ${n}$ | ${nlog(n)}$ | $n2$ | ${n3}$ | ${n4}$ | ${2n}$  |
| ----- | ---------- | ----- | ----------- | ---- | ------ | ------ | ------- |
| 1     | 0          | 1     | 0           | 1    | 1      | 1      | 2       |
| 5     | 0.7        | 0     | 3.5         | 25   | 125    | 625    | 32      |
| 10    | 1          | 10    | 10          | 100  | 1000   | 10000  | 1024    |
| 20    | 1.3        | 20    | 26          | 400  | 8000   | 160000 | 1048576 |
4




