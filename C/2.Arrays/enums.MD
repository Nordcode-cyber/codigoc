###                                 Enumeraciones 


Una enumeración (enum) es un tipo definido por el usuario con constantes de nombre de tipo entero. Para la declaración de un
tipo enum se escribe una lista de identificadores que internamente se asocian con las constantes enteras 0, 1, 2 ... .. su sintaxis
de declaración es:
enum
```{```
`enumerador_1, enumerador_2, ...enumerador_n`
```};```
En la declaración del tipo enum pueden asociarse a los identificadores valores constantes en vez de la asociación que por
defecto se hace (0, 1, 2 ...n ). Para ello se utiliza este formato:
enum nombre
{
enumerador1 = expresión_constante_1,
enumerador2 = expresión_constante_2,
...
enumeradorn = exprsesión_constante_n
};