#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<string, int> alamin;
    alamin.first = "Al AMin";
    alamin.second = 23;

    cout<<alamin.first<<endl;

    pair<vector<int> , string> custome;

    custome.first.push_back(10);
    custome.first.push_back(20);
    custome.first.push_back(30);
    custome.first.push_back(50);
    custome.first.push_back(60);
    custome.first.push_back(80);

    custome.second = "NEw Vector";

    for(auto value: custome.first)
        cout<<value<<" ";
}