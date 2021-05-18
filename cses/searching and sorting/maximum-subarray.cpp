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
    int n;
    cin >> n;
    vll arr(n, 0);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    ll curr = 0, best=INT_MIN;
    for(int i=0; i<n; i++){
        curr = max(curr + arr[i], arr[i]);
        best = max(curr, best);
        
    }
    cout << best;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
        solve();
    
    return 0;
}