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
ll n, x;
vll weight(101);
void solve()
{
    weight.clear();
    cin >> n >> x;
    ll sum = 0;
    for (ll i = 0; i < n; i++){
        cin >> weight[i];
        sum += weight[i];
    }
    if(sum == x){
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    for(int i=0; i<n; i++){
        if(x == weight[i]){
            swap(weight[i], weight[i+1]);
        }
        cout << weight[i] << " ";
        x -= weight[i];
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