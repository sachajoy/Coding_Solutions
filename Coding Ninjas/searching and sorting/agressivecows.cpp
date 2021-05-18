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
vll postions;
bool canplace(ll gap){
    ll cows = k;
    ll i=1;
    ll last = postions[0];
    cows -= 1;
    while(i < n){
        if(cows == 0)
            return true;
        if(postions[i] - last >= gap){
            cows -= 1;
            last = postions[i];
        }
        i++;
    }
    if(cows == 0){
        return true;
    }
    return false;
}
ll min_distance(ll start, ll end)
{
    ll mid, ans=start;
    while (start <= end)
    {
        // cout << start << " - " << end << endl;
        mid = start + (end - start) / 2;
        if(canplace(mid) == true){
            ans = mid;
            start = mid+1;
        }else{
            end = mid - 1;
        }
    }
    return ans;
}
void solve()
{
    cin >> n >> k;
    postions.clear();
    for (ll i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        postions.pb(a);
    }
    sort(postions.begin(), postions.end());
    // cout << 0;
    cout << min_distance(0, postions[n - 1] - postions[0]) << endl;
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