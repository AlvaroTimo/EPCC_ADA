#include <iostream>
#include <vector>
using namespace std;

int pick_resume(vector<int> resumes){
    string eliminate = "top";
    int lenght;
    while(resumes.size()>1){
        lenght=resumes.size();
        if(eliminate == "top"){
            resumes.assign(resumes.begin()+(lenght/2),resumes.end());
            eliminate="bottom";
        }
        else if(eliminate=="bottom"){
            resumes.assign(resumes.begin(),resumes.begin()+(lenght/2));
            eliminate="top";
        }
    }
    return resumes[0];
}

int main(){
    vector<int>resumes;
    resumes.assign(8,4);
    cout<<pick_resume(resumes);
    return 0;
}