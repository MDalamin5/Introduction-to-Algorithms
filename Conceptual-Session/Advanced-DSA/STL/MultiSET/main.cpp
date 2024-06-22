/*
Multiset Property

- values are sorted order
- can be duplicate value
- non decreasing order

*/

#include<bits/stdc++.h>
using namespace std;

void print(auto mst){
    for(auto child: mst)
        cout<<child<<" ";
    cout<<endl;
}
int main(){
    multiset<int> mst;
    mst.insert(2);
    mst.insert(2);
    mst.insert(6);
    mst.insert(26);
    mst.insert(8);
    mst.insert(7);
    mst.insert(29);

    print(mst);
    
    // erase all occurrence
    mst.erase(2);
    print(mst);     
    mst.insert(2);
    mst.insert(2);
    mst.insert(2);
    print(mst);

    if(mst.find(4) != mst.end())
        cout<<"Item is found"<<endl;
    else
        cout<<"item is not Found"<<endl;

    // Single occurrence delete

    mst.erase(mst.find(2));
    print(mst);
}

