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
ll n, q;
vll rates, days;
ll sum[int(1e5)];
void momos(ll money, ll start, ll end)
{
    ll mid, ans = 0;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (sum[mid] > money)
        {
            end = mid - 1;
        }
        else
        {
            ans = mid+1;
            start = mid + 1;
        }
    }
    cout << ans << " " << money - sum[ans] << endl;
}
void solve()
{
    rates.clear();
    days.clear();
    cin >> n;
    ll s = 0;
    sum[0] = 0;
    for (ll i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        rates.pb(a);
        s += a;
        sum[i+1] = s;
    }

    cin >> q;
    for (ll i = 0; i < q; i++)
    {
        ll a;
        cin >> a;
        momos(a, 0, n);
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