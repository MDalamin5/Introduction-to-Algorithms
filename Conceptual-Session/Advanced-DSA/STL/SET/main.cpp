#include<bits/stdc++.h>
using namespace std;

void print(auto st){
    for(auto child: st){
        cout<<child<<" ";
    }
    cout<<endl;
}

int main(){
    // All elements are sorted order and unique value or distinct
    set<int> st;

    st.insert(3);
    st.insert(3);
    st.insert(3);
    st.insert(5);
    st.insert(6);
    st.insert(9);

    print(st);
    
    // cout<<"Total distrnt elements are: "<<st.size()<<endl;

    // // Another approch of set printing

    // for(auto it = st.begin(); it != st.end(); it++){
    //     cout<<*it<<" ";
    // }
    cout<<endl;

    // Erase Function
    st.erase(3);
    print(st);
    st.erase(3);
    print(st);
    
    // FInd Elements From the set
    if(st.find(4) != st.end())
        cout<<"Item is Found"<<endl;
    else
        cout<<"Item is not Found"<<endl;

    if(st.find(9) != st.end())
        cout<<"Item is Found"<<endl;
    else
        cout<<"Item is not Found";

    
}