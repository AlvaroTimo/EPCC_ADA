#include <iostream>
#include <vector>
using namespace std;

int greatestNumber(vector<int> array){
    int mayor = array[0];
    for(int i=1;i<array.size();i++){
        if(array[i]>mayor)
            mayor=array[i];
    }
    return mayor;
}
int main(){
    int tam=10;
    vector<int> array;
    array.assign(10,4);
    cout<<greatestNumber(array);
    return 0;
}