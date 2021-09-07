#include <bits/stdc++.h>
using namespace std;
int helper(vector<int> &curr, vector<int> &future, int n, int k, vector<vector<int>> &dp){
    if(n == 0 || k == 0){
        return 0;
    }
    if(dp[n][k] != -1) return dp[n][k];
    int out1 =0, out2 = 0;
    if(k >= curr[n-1]){
        out1 = helper(curr, future, n-1, k-curr[n-1], dp) + future[n-1] - curr[n-1];
    }
    out2 = helper(curr, future, n-1, k, dp);
    return dp[n][k] = max(out1, out2);
}
int helper(vector<int> &curr, vector<int> &future, int n, int k, vector<vector<int>> &dp){
    
    for(int i=0; i<=n; i++){
        for(int j=0; j<=k; j++){
            if(i == 0 || j == 0){
                dp[i][j] = 0;
            }
            if(j >= curr[i-1]){
                dp[i][j]  = max(dp[i][j], dp[i-1][j-curr[i-1]] + future[i-1] - curr[i-1]);
            }
            dp[i][j] = max(dp[i][j], dp[i-1][j]);
        }
    }
    return dp[n][k];
}