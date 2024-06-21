#include<bits/stdc++.h>
using namespace std;

const int maxN = 1000;
vector<int> adjList[maxN];
bool visited[maxN];

void BFS(int s){
    queue<int> q;
    cout<<s<<" ";
    visited[s] = true;
    q.push(s);
    
    while(!q.empty()){
        int vertex = q.front();
        q.pop();
        for(auto child: adjList[vertex]){
            if(visited[child] == false){
                cout<<child<<" ";
                visited[child] = true;
                q.push(child);
            }
        }

    }

}
int main(){
    int n, e;
    cin>>n>>e;
    
    for(int i=0; i<e; i++){
        int u, v;
        cin>>u>>v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    

    for(int i=0; i<n; i++){
        cout<<i<<"-->";
        for(auto child: adjList[i]){
            cout<<child<<" ";
        }
        cout<<endl;
    }
    cout << "BFS visiting result from Src node 1: ";
    BFS(1);

}


/*
input:
10 8
1 2
1 3
2 4
3 4
3 6
4 6
6 7
6 8
*/