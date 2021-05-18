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
bool squar(ll n){
    ll y = sqrt(n);
    return y*y == n;
}
void solve()
{
     ll n;
     cin >> n;
     if((n %2 == 0 && squar(n/2)) || (n%4 == 0 && squar(n/4)))
     cout << "YES" << endl;
     else
     cout << "NO" << endl;
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