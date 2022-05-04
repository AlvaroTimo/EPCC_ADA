# Simulacion del insertion sort

## El array inicial es A = [ 31 , 41 , 59, 26 , 41 ,58]

```c++
void insertionSort(int n,int A[]){
    //definimos las variables que usaremos
    int tam=n, key,i;
    for(int j=1;j<tam;j++){
        //Key sera el valor nuevo a insertar
        key=A[j];
        //Key se comparara con todas las posiciones que toma i
        i=j-1;
        //Aqui es donde revertimos el orden de ascendente en descendente
        while(i>=0 && A[i]<key){
            //Aqui intercambiamos los valores de A
            A[i+1]=A[i];
            i=i-1;
        }
        A[i+1]=key;
    }    
}
```
En la primera interacion el arreglo queda asi:

>A = [41, 31, 59, 26, 41, 58]

En la segunda iteracion, queda asi:

>A = [59, 41, 31, 26, 41, 58]

En la tercera iteracion, queda asi:

>A = [59, 41, 31, 26, 41, 58]

En la cuarta iteracion queda asi

>A = [59, 41, 41, 31, 26, 58]

Y en la quinta y ultima iteracion queda asi

>A = [59, 58, 41, 41, 31, 26]

