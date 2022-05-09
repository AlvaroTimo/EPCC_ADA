#include <iostream>
#include <vector>
using namespace std;

void every_other(vector<int> array){
    for(int i=0;i<array.size();i++){
        if(i%2==0){
            for(int j=0;j<array.size();j++){
                cout<<array[i]+array[j]<<"\t";
            }
            cout<<endl;
        }
    }
}
int main(){
    int tam=10;
    vector<int> array;
    array.assign(10,4);
    every_other(array);
    return 0;
}