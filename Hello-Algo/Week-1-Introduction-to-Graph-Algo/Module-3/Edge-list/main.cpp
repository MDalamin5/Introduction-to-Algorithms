#include<bits/stdc++.h>
using namespace std;
/*

0----1
    / \
   2--3


   [0, 1]
   [1, 2]
   [1, 3]
   [2,3]

UPdate line


*/

int main(){
    int nodes = 4;
    vector< vector<int> > edge_list;

    edge_list.push_back({0, 1});
    edge_list.push_back({1, 2});
    edge_list.push_back({1, 3});
    edge_list.push_back({2, 3});
    

    for(int i=0; i<edge_list.size(); i++){
        cout<<edge_list[i][0]<<", "<<edge_list[i][1]<<endl;
    }

}