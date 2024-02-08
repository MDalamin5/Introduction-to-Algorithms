#include<bits/stdc++.h>
using namespace std;
void printData(vector<int>a){
    for(int i=0; i<a.size(); i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
int main(){
    int sz = 10;
    // cin>>sz;
    vector<int>a;
    for(int i=0; i<sz; i++){
        a.push_back(i);
    }

    printData(a);
    
    // inser into beginign

    a.insert(a.begin() + 0, 99);
    printData(a);

    // insert at any positons
    a.insert(a.begin() + 3, 999);
    printData(a);

    // erase data
    a.erase(a.begin()+3);
    printData(a);
    a.pop_back();
    printData(a);
    
}