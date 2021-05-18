#include <bits/stdc++.h>
using namespace std;
#define MOD int(ie9 + 7)
typedef long long ll;
int n;
ll arr[2000];
ll dp[2001][2001];
ll helper(ll start, ll end)
{
    if (start == end)
    {
        return 0;
    }
    if (start == end - 1)
    {
        return arr[end] - arr[start];
    }
    if (dp[start][end] != -1)
        return dp[start][end];
    ll out1 = helper(start, end - 1);
    ll out2 = helper(start + 1, end);
    return dp[start][end] = min(out1 + arr[end] - arr[start], out2 + arr[end] - arr[start]);
}
void solve()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    memset(dp, -1, sizeof(dp));
    ll x = helper(0, n - 1);
    cout << x << endl;
}

int main()
{
    solve();
    return 0;
}