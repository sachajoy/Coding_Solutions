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
int a, b, c;
int dp[30][30][30][3];
int helper(int a, int b, int c, int ball){

    if(a < 0 || b < 0 || c < 0){
        return 0;
    }
    if(a == 1 && b == 0 && c == 0 && ball == 0){
        return 1;
    }
    if(a == 0 && b == 1 && c == 0 && ball == 1){
        return 1;
    }
    if(a == 0 && b == 0 && c == 1 && ball == 2){
        return 1;
    }
    if(dp[a][b][c][ball] != -1){
        return dp[a][b][c][ball];
    }
    if(ball == 0){
        int out1 = helper(a-1, b, c, 1) + helper(a-1, b, c, 2);
        return dp[a][b][c][ball] = out1;
    }
    if(ball == 1){
        int out2 = helper(a, b-1, c, 0) + helper(a, b-1, c, 2);
        return dp[a][b][c][ball] = out2;
    }
    
    int out3 = helper(a, b, c-1, 0) + helper(a, b, c-1, 1);
    return dp[a][b][c][ball] = out3;
    

}
void solve()
{
    cin >> a >> b >> c;
    memset(dp, -1, sizeof(dp));
    int ans = helper(a, b, c, 1) + helper(a, b, c, 0) + helper(a, b, c, 2);
    cout << ans << endl;

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