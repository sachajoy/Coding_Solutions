#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007
ll n;
void solve()
{
    cin >> n;
    ll w[n + 1], l[n + 1];
    for (ll i = 1; i <= n; i++)
        cin >> w[i];
    for (ll i = 1; i <= n; i++)
        cin >> l[i];
    map<ll, pair<ll, ll>> m;
    for (ll i = 1; i <= n; i++)
    {
        m[w[i]] = make_pair(i, l[i]);
    }
    ll curr = m[1].first, ans = 0;
    for (ll i = 2; i <= n; i++)
    {
        if (m[i].first <= curr)
        {
            while (m[i].first <= curr)
            {
                m[i].first += m[i].second;
                ans++;
            }
        }
        curr = m[i].first;
    }
    cout << ans << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}