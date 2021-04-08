#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007
int n;
void solve()
{
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int x = 0, y = 1, z = n - 1;
    ll ans = abs(arr[x] - arr[y]) + abs(arr[z] - arr[y]) + abs(arr[z] - arr[x]);
    while (y < z)
    {
        ll temp = abs(arr[x] - arr[y]) + abs(arr[z] - arr[y]) + abs(arr[z] - arr[x]);
        // cout << temp << endl;
        ans = max(ans, temp);
        y++;
    }
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}