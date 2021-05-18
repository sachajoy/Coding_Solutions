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
ll m, n;
vll arr;
void solve()
{
    cin >> n >> m;
    arr.clear();
    for(int i=0; i<n*m; i++){
        ll a;
        cin >> a;
        arr.pb(a);
    }
    ll sum = 0;
    sort(arr.begin(), arr.end());
    for(int i=0; i<m; i++){
        sum += arr[i];
    }
    cout << sum << endl;
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