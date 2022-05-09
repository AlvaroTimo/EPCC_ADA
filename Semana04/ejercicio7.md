# Ejercicio 7

![](ejercicio7.png)

## Describe paso a paso cual es la complejidad del siguiente codigo

Es un ejercicio parecido al anterior el primer bucle se ejecutara n<sup>1/2</sup> -1 veces debido a que ahora primero entra al bucle y luego recien incrementa el valor de i sin embargo -1 es una constante que en valores de n muy grandes no signica nada, asi que aunque p se incrementa n<sup>1/2</sup> -1 veces, lo tomaremos solo como p=n<sup>1/2</sup> 

Para el segundo bucle ahora p sera el nuevo n por tanto el segundo bucle se ejecutara p<sup>1/2</sup> veces


>p siempre es claramente inferior a n

La complejidad del algoritmo seria n<sup>1/2</sup> + p<sup>1/2</sup>

>p era n<sup>1/2</sup> como mencionamos en un inicio, entonces p<sup>1/2</sup> seria en realidad n<sup>1/2</sup> elevado a 1/2

Para la complejidad nos interesa saber el mayor de ambos terminos por ende la complejidad es O(n<sup>1/2</sup>)

