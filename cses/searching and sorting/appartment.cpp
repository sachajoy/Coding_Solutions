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
ll n, m, k;
vll app, des;
void solve()
{
    cin >> n >> m >> k;
    for (ll i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        app.pb(a);
    }
    for (ll i = 0; i < m; i++)
    {
        ll a;
        cin >> a;
        des.pb(a);
    }
    sort(app.begin(), app.end());
    sort(des.begin(), des.end());
    ll i=0, j=0, ans = 0;
    while(i < n && j < m){
        if(abs(app[i] - des[j]) <= k){
            ans++; i++; j++;
        }else if(app[i] > des[j]){
            j++;
        }else{
            i++;
        }
    }
    cout << ans ;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();

    return 0;
}