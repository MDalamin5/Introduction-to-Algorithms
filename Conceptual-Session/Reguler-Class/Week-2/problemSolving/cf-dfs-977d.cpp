#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
map<ll, vector<ll>> adj;
map<ll, bool> visited;
vector<ll> ans;
int n;
bool found = false;

void bfs(ll s)
{
    if (ans.size() == n)
    {
        found = true;
        return;
    }

    queue<ll> q;
    q.push(s);
    visited[s] = true;
    ans.push_back(s);

    while (!q.empty())
    {
        if (ans.size() == n)
        {
            found = true;
            return;
        }
        auto parent = q.front();
        q.pop();

        for (ll child : adj[parent])
        {
            if (parent * 2 == child && !visited[child])
            {
                ans.push_back(child);
                q.push(child);
                visited[child] = true;
            }
            else if ((parent % 3 == 0) && (parent / 3) == child && !visited[child])
            {
                ans.push_back(child);
                q.push(child);
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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

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

        bfs(val.first);
        if (found)
            break;
        init();
    }

    for (auto result : ans)
    {
        cout << result << " ";
    }
}
