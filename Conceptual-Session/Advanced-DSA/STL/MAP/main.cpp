#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string, int> age;

    age["Al Amin"] = 22;
    age["Mariya"] = 15;
    age["Badol"] = 70;

    
    for(auto ageIs: age){
        cout<<ageIs.first<<"-->"<<ageIs.second<<endl;
    }
}