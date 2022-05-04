#include<iostream>

using namespace std;

void insertionSort(int n,int A[]){
    //definiimos las variables que usaremos
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

void testing(){
    int n=10;

    cout<<"Arreglo antes de ser ordenado "<<endl;
    for(int k=0;k<=10;k++){
        //Generando un arreglo de numeros random
        int A[n];
        for(int k=0;k<n;k++){
            A[k]=rand();
            cout<<A[k]<<"\t";
        } 
        cout<<endl;
        //ordenando el arreglo y tomando tiempo a eso
        unsigned t0, t1;
        t0=clock();

        insertionSort(n,A);

        cout<<"Arreglo despues de ser ordenado "<<endl;
        for(int k=0;k<n;k++){
            cout<<A[k]<<"\t";
        } 

        t1 = clock();

        double time = (double(t1-t0)/(CLOCKS_PER_SEC/1000));
        cout << endl<<"Execution Time: " << time-0.0 <<" ms"<< endl;

    }
    
}

int main(){
    //creamos un arreglo con el peor caso posible un arreglo ordenado ascendentemente
    int n=10,A[n];
    for(int i=0;i<10;i++){
        A[i]=i;
    }

    insertionSort(n,A);

    //mostramos el arreglo ordenado
    for(int i=0;i<10;i++){
        cout<<A[i]<<"\t";
    }
    cout<<endl;
    //probando con otros datos
    testing();

    return 0;
}