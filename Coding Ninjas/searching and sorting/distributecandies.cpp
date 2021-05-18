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
ll n, k;
vll arr;
bool can_distribute(ll candies)
{
    ll students = k, i = n - 1;
    while (students > 0 && i >= 0)
    {
        students -= arr[i] / candies;
        i--;
    }
    if (students <= 0)
    {
        return true;
    }
    return false;
}
ll min_candies(ll start, ll end)
{
    ll mid, candies = 0;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (can_distribute(mid))
        {
            candies = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return candies;
}
void solve()
{
    arr.clear();
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        arr.pb(a);
    }
    sort(arr.begin(), arr.end());
    cout << min_candies(0, arr[n - 1]) << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}