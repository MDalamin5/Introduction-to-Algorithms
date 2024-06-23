#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
map<ll, vector<ll>> adj;
map<ll, bool> visited;
vector<ll> ans;
int n;
bool found = false;

void bfs(ll s) {
    if (ans.size() == n) {
        found = true;
        return;
    }

    queue<ll> q;
    q.push(s);
    visited[s] = true;
    ans.push_back(s);

    while (!q.empty()) {
        auto parent = q.front();
        q.pop();

        for (auto child : adj[parent]) {
            if (!visited[child]) {
                ans.push_back(child);
                q.push(child);
                visited[child] = true;
                if (ans.size() == n) {
                    found = true;
                    return;
                }
            }
        }
    }
}

void init() {
    ans.clear();
    visited.clear();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    vector<ll> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    // Construct adjacency list
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j) {
                if (v[j] == v[i] * 2 || (v[i] % 3 == 0 && v[j] == v[i] / 3)) {
                    adj[v[i]].push_back(v[j]);
                }
            }
        }
    }

       // Try to find a valid sequence using BFS starting from each node
    for (auto val : adj) {
        init();  // Initialize visited and ans before each BFS
        bfs(val.first);
        if (found) {
            break;
        }
    }

    // Output the result
    if (ans.size() == n) {
        for (auto result : ans) {
            cout << result << " ";
        }
        cout << endl;
    } 

    

    return 0;
}
