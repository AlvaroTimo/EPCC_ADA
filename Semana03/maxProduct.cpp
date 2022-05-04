#include<iostream>
#include<vector>


//Este sera el producto maximo de 2 numeros en un arreglo de tamaño n

using namespace std;

int maxProduct(vector<int>& numbers){
    int mayor1,mayor2;

    if(numbers[0]>=numbers[1]){
        mayor1=numbers[0];
        mayor2=numbers[1];
    }

    else{
        mayor1=numbers[1];
        mayor2=numbers[0];
    }

    for(int i=2;i<numbers.size();i++){
        //cout<<i<<endl;
        if(i%2==0 && numbers[i]>mayor1){
            mayor1=numbers[i];
        }
        else if(i%2!=0 && numbers[i]>mayor2)
        {
            mayor2=numbers[i];
        }
    }

    return mayor1*mayor2;
}
int main(){
    //Explicamos al usuario de que trata el programa
    cout<<"Hola :D, este es un programa que calcula el maximo producto de 2 numeros de todos los numeros que ingrese "<<endl;
    //Lectura de datos
    vector<int> numbers;
    int n;
    string seguir;
    
    //recibimos numeros hasta que el usuario presiones 0

    //usaremos un valor bandera para detener el ingreso de datos
    //debido a que while(cin>>n) que se detiene con escape es poco intuitivo para el usuario
    while(seguir!="no"){
        cout<<"Ingrese un numero ";
        cin>>n;
        numbers.push_back(n);
        cout<<"¿Desea seguir ingresando numeros? si/no ";
        cin>>seguir;
    }

    cout<<"Mostrando los numeros ingresados"<<endl;
    for(int i=0;i<numbers.size();i++){
        cout<<numbers[i]<<"\t";
    }
    cout<<endl<<"El producto maximo es: "<<maxProduct(numbers);

    return 0;
}