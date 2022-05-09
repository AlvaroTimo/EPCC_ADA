#include <iostream>
#include <vector>
using namespace std;

bool twoSum(vector<int> array){
    for(int i=0;i<array.size();i++){
        for(int j=0;j<array.size();j++){
            if(i!=j && array[i]+array[j]==10)
                return true;
        }
    }
    return false;
}
int main(){
    int tam=10;
    vector<int> array;
    array.assign(10,5);
    cout<<twoSum(array);
    return 0;
}