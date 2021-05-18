#include <bits/stdc++.h>
using namespace std;
#define mod int(1e9 + 7)
#define ll long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pll pair<ll, ll>
#define vec vector
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define F first
#define S second
ll n;
vi arr;
ll sum = 0;
bool helper(int k, int i){
    if(i == n){
        if(k == 0){
            return true;
        }
        return false;
    }
    if(dp[i][k] != -1){
        return dp[i][k];
    }
    bool out1 = false, out2 = false;
    if(k >= arr[i]){
        out1 = helper(k - arr[i], i+1);
    }
    out2 = helper(k, i+1);
    return out1 || out2;
}
void solve()
{
    cin >> n;
    sum = 0; 
    for(int i=0; i<n; i++){
        ll a;
        cin >> a;
        sum += a;
        arr.push_back(a);
    }
    if(sum%2 == 1){
        cout << "0" << endl;
    }else{
        sort(arr.begin(), arr.end());
        
    }

}

int main()
{
    FAST;

    solve();
    return 0;
}