#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007

int helper(string s1, int l, int h, int** dp){
    if(l > h){
        return 0;
    }
    if(dp[l][h] != -1){
        return dp[l][h];
    }
    if(s1[l] == s1[h]){
        return dp[l][h] = helper(s1, l+1, h-1, dp);
    }
    int op1 = helper(s1, l+1, h, dp);
    int op2 = helper(s1, l, h-1, dp);
    return dp[l][h] = min(op1, op2)+1;
}
void solve(){
    string s;
    cin >> s;
    int** dp = new int*[s.size()];
    for(int i=0; i<s.size(); i++){
        dp[i] = new int[s.size()];
        for(int j=0; j<s.size(); j++){
             dp[i][j] = -1;
        }
    }
    
    cout << helper(s, 0, s.size()-1, dp)<< endl;
    for(int i=0; i<s.size(); i++){
        for(int j=0; j<s.size(); j++){
             cout << dp[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int t; 
    cin >> t;
    while(t--)
        solve();
    return 0;
}