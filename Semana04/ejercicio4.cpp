#include <iostream>
#include <vector>
using namespace std;

bool find_needle(string needle,string haystack){
    int needle_index=0;
    int haystack_index=0;
    bool found_needle;
    while(haystack_index<haystack.length()){
        if(needle[needle_index]==haystack[haystack_index]){
            found_needle=true;
            while(needle_index<needle.length()){
                if(needle[needle_index]!= haystack[haystack_index + needle_index]){
                    found_needle=false;
                    break;
                }
                needle_index+=1;
            }
            if(found_needle)
                return true;
            needle_index=0;
        }
        haystack_index +=1;
    }
    return false;
}
int main(){
    string a="pill",b="caterpillar";
    cout<<find_needle(a,b);
    return 0;
}