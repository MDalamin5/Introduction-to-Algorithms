#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    vector<pair<int, int>> adjList[n + 1];
    for (int i = 0; i < e; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adjList[u].push_back({v, w});
        adjList[v].push_back({u, w});
    }

    for(int i=0; i<n; i++){
        cout<<i<<"-->";
        for(auto j: adjList[i])
            cout<<"{"<<j.first<<", "<<j.second<<"}"<<" ";
        cout<<endl;
    }
}

/*
1 3 3
1 2 2
1 4 6
2 0 6
2 3 7
0 4 3
3 4 5

outPut:
0-->{2, 6} {4, 3} 
1-->{3, 3} {2, 2} {4, 6} 
2-->{1, 2} {0, 6} {3, 7} 
3-->{1, 3} {2, 7} {4, 5} 
4-->{1, 6} {0, 3} {3, 5} 
*/