#include<bits/stdc++.h>
using namespace std;
int main(){
    int nodes = 4;
    vector<int>adj_list[nodes];

    // O(n^2) = O(E)
    adj_list[0] = {1};
    adj_list[1] = {0, 2, 3};
    adj_list[2] = {1, 3};
    adj_list[3] = {2, 1};

    for(int i=0; i<nodes; i++){  //
        for(int j=0; j<adj_list[i].size(); j++){
            cout<<adj_list[i][j]<<" ";
        }
        cout<<endl;
    }

}