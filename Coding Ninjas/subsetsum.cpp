#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n;
    int a[n];
    for(int i=0; i<a; i++){
        cin >> a[i];
    }
    cin >> k;
    bool dp[n+1][k+1];
    for(int i=0; i<=n; i++){
        dp[i][0] = 0;
    }
    for(int i=0; i<=k; i++){
        dp[0][i] = 0;
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=k; i++){
            dp[i][j] = dp[i-1][j];
            if(a[i-1] >= j){
                dp[i][j] = dp[i][j] || dp[i-1][j - a[i-1]];
            }
        }
    }
    cout << dp[n][k];
}