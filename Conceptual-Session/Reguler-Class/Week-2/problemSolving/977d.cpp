#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
map<ll, vector<ll>> adj;
map<ll, bool> visited;
int n;

vector<ll> ans;
int found = 0;
void bfs(ll s)
{

    queue<ll> q;
    visited[s] = true;
    q.push(s);
    ans.push_back(s);

    while (!q.empty())
    {
        if (ans.size() == n)
        {
            found = 1;
            return;
        }
        ll parent = q.front();
        q.pop();

        for (ll child : adj[parent])
        {
            if ((parent * 2) == child && !visited[child])
            {
                q.push(child);
                ans.push_back(child);
                visited[child] = true;
            }
            else if ((parent % 3 == 0) && (parent / 3) == child && !visited[child])
            {
                q.push(child);
                ans.push_back(child);
                visited[child] = true;
            }
        }
    }
}
void init()
{
    ans.clear();
    visited.clear();
}
int main()
{
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j)
                adj[v[i]].push_back(v[j]);
        }
    }

    for (auto val : adj)
    {
        cout << val.first << "-->";
        for (auto i : val.second)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    for (auto val : adj)
    {
        bfs(val.first);
        if (found == 1)
            break;
        // cout << found << " adj->" << val.first << "size of and: " << ans.size() << endl;
        init();
    }

    for (auto val : ans)
    {
        cout << val << " ";
    }

    return 0;
}