#include <bits/stdc++.h>
using namespace std;

/*
1 2
1 3
2 3
2 7
6 7
7 8
8 9
9 6
2 8

*/

const int maxN = 9;
int main()
{
    vector<int> adjList[maxN + 1];
    int e;
    cin >> e;

    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    for (int i = 0; i < maxN; i++){
        cout<<i<<"-->";
        for(auto j : adjList[i])
            cout<<j<<" ";

        cout<<endl;
    }
}