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
int m = int(1e9 + 7);
int helper(int n){
    if(n == 1) return 1;
    if(n <= 0) return 0;
    long long res = 0;
    for(int i=0; i<=n; i++){
        res = (res + (helper(i) + helper(n-i))%m)%m;
    }
    return res%m;
}
int gokuAndDragonBalls(int n){
    return helper(n);
}
void solve()
{
    int n;
    cin >> n;
    cout << gokuAndDragonBalls(n) << endl;
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