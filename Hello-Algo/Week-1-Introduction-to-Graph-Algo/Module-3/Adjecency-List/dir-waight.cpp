#include<bits/stdc++.h>
using namespace std;

/*
0------1
      / \
    2----3


   4
0---->1

   6
2---->1
   8
2---->3

    9
3----->1

*/

int main(){
    int nodes = 4;
    vector<pair<int, int>>adj_list[nodes];

    adj_list[0] = {{1, 4}};
    adj_list[2] = {{1, 6}, {3, 8}};
    adj_list[3] = {{1, 9}};


    for(int i = 0; i<nodes; i++){
        for(int j=0; j<adj_list[i].size(); j++){
            cout<<"("<< adj_list[i][j].first<<" ,"<<adj_list[i][j].second<<"),";
        }
        cout<<endl;
    }
}