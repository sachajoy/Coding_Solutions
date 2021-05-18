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
void solve()
{
    ll a, b;
    cin >> a >> b;
    ll x, y, z;
    if (b == 1)
    {
        cout << "NO";
    }
    else
    {
        y = a;
        x = b * a;
        z = x + y;
        cout << "YES" << endl;
        cout << y << " " << x << " " << z;
    }
    cout << endl;
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