#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int>a(3);
    // cout<<a.size();

    vector<int> a = {1, 2, 3, 4, 5, 6};

    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    a.resize(2);
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
}