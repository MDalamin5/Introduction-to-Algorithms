#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
map<ll, vector<ll>> adj;

int main(){
    int n;
    cin>>n;

    vector<ll> v(n);
    for(int i=0; i<n;i++)
        cin>>v[i];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i!=j)
                adj[v[i]].push_back(v[j]);
        }
    }

    for(auto val : adj){
        cout<<val.first<<"-->";
        for(auto i : val.second){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    

}