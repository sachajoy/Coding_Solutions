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
ll n, w;
map<ll, ll> arr;
void solve()
{
    cin >> n >> w;
    for(ll i=0; i<n; i++){
        ll a;  cin >> a;
        arr[log2(a)] += 1;
    }
    ll height = 1, space = w;
    for(ll i=0; i<n; i++){
        int largest = -1;
        for(ll j = 19; j>=0; j--){
            if(arr[j] > 0 && pow(2, j) <= space){
                largest = j;
                break;
            }
        }
        if(largest == -1){
            height += 1;
            space = w;
            for(ll j = 19; j>=0; j--){
                if(arr[j] > 0 && pow(2, j) <= space){
                    largest = j;
                    break;
                }
            }   
        }
        arr[largest] -= 1;
        space -= pow(2, largest);
    }
    cout << height << endl;
    
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