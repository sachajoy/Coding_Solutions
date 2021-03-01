#include <bits/stdc++.h>
using namespace std;
#define mod int(1e9 + 7)
typedef long long ll;
int n, m, q;
int graph[1000][1000];
int visited[1000][1000];
ll fact(ll n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * fact(n - 1);
}
ll bfs(int i, int j)
{
    if (i >= n || j >= m || j < 0 || i < 0)
    {
        return 0;
    }
    if (visited[i][j] == 1)
    {
        return 0;
    }
    visited[i][j] = 1;
    if (graph[i][j] == 0)
    {
        return 0;
    }
    ll count = 1;
    int move1 = bfs(i + 1, j + 2);
    int move2 = bfs(i + 1, j - 2);
    int move3 = bfs(i - 1, j + 2);
    int move4 = bfs(i - 1, j - 2);
    int move5 = bfs(i + 2, j + 1);
    int move6 = bfs(i + 2, j - 1);
    int move7 = bfs(i - 2, j + 1);
    int move8 = bfs(i - 2, j - 1);
    count = count + move1 + move2 + move3 + move4 + move5 + move6 + move7 + move8;
    return count;
}
void solve()
{
    cin >> n >> m >> q;
    for (int i = 0; i < q; i++)
    {
        int a, b;
        cin >> a >> b;
        graph[a - 1][b - 1] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            visited[i][j] = 0;
        }
    }
    ll ans = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (visited[i][j] == 0 && graph[i][i] == 1)
            {
                ll temp = bfs(i, j);
                ans = (ans * (fact(temp) % mod)) % mod;
            }
        }
    }
    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
