#include <bits/stdc++.h>
using namespace std;

const int N = 1e3;
int visited[N];
vector<int> adj_list[N];

void dfs(int node) {
    cout << node << endl;
    visited[node] = 1;

    for (int adj_node : adj_list[node]) {
        if (visited[adj_node] == 0) {
            dfs(adj_node);
        }
    }
}

/*
0-----1-------2--------3
      |       \
      \       \
      5 ------4 

6 6
0 1
2 3
1 5
2 4
5 4
1 2   

*/

int main() {
    int nodes, edges;
    cin >> nodes >> edges;

    for (int i = 0; i < edges; i++) {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    int srcNode = 0;
    cout<<"the output is: "<<endl;
    dfs(srcNode);
}
