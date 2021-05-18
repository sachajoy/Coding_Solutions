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
    ll n;
    cin >> n;
    vll arr(n);
    for(ll i=0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    ll median = arr[n/2];
    ll cost = 0;
    for(ll i=0; i<n; i++){
        cost += abs(arr[i] - median);
    }
    cout << cost;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
        solve();
    return 0;
}