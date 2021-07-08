#include <bits/stdc++.h>
using namespace std;
#define mod int(1e9 + 7)
#define ll long long
#define pll pair<ll, ll>
#define vec vector
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define mp make_pair
#define F first
#define S second
#define pb push_back
vector<int> adj[100001];
vector<int> in(100001), low(100001), visited(100001, 0);
vector<pair<int, int>> edges;
int timer;
bool hasBridges;
int n, m, a, b;
void dfs(int start, int par)
{
    visited[start] = 1;
    in[start] = low[start] = timer;
    timer++;
    for (int node : adj[start])
    {
        if (par == node)
            continue;
        else if (visited[node])
        {
            low[start] = min(low[start], in[node]);
            if (in[start] > in[node])
                edges.pb({start, node});
        }
        else
        {
            dfs(node, start);
            low[start] = min(low[node], low[start]);
            if(low[node] > in[start]){
                cout <<  "t- " << node << " " << start << endl;
                hasBridges = true;
                return;
            }
            edges.pb({start, node});
        }
    }
}
void solve()
{
    timer = 0;
    hasBridges = false;
    cin >> n >> m;
    while (m--)
    {
        cin >> a >> b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    dfs(1, -1);
    if(hasBridges){
        cout << 0; 
    }
    else{
        for(auto p: edges){
            cout << p.first << " " << p.second << endl;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}