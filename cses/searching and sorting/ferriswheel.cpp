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
    ll n, x;
    cin >> n >> x;
    vll weight(n, 0);
    for(ll i=0; i<n; i++){
        cin >> weight[i];
    }
    sort(weight.begin(), weight.end());
    ll ans = 0, i = 0, j = n-1;
    while( i <= j){
        // cout << weight[i] << " - " << weight[j] << endl;
        if(i == j){
            i++;
            j--;
            ans++;
        }else if(weight[i] + weight[j] > x){
            j--;
            ans++;
        }else if(weight[i] + weight[j] <= x){
            i++;
            j--;
            ans++;
        }
    }
    cout << ans;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}