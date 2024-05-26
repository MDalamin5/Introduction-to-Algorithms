#include<bits/stdc++.h>
using namespace std;

const int N = 1e3;
int visited[N];

vector<int> adj_list[N];

void dfs(int node){
    cout<<node<<endl;

    for(int adj_node: adj_list[N]){
        if(visited[adj_node] == 0){
            dfs(adj_node);
        }
    }
}
