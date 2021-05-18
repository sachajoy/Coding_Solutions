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
ll n;
ll sum(ll n){
    ll temp = 0;
    while(n != 0){
        temp += n%10;
        n = n/10;
    }
    return temp;
}
void solve()
{
    cin >> n;
    while(true){
        ll temp = sum(n);
        if(__gcd(n, temp) > 1){
            cout << n << endl;
            break;
        }
        n += 1;
    }
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