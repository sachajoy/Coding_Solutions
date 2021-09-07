#include <bits/stdc++.h>
using namespace std;
int maximalSquare(vector<vector<char>>& matrix) {
        int n = matrix.size();
        if(n == 0){
            return 0;
        }
        int m = matrix[0].size();
        int dp[n][m], ans = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(i == 0 || j == 0){
                    if(matrix[i][j] == '1')
                        dp[i][j] = 1;
                    else
                        dp[i][j] = 0;
                }else{
                    if(matrix[i][j] == '1')
                        dp[i][j] = min(dp[i-1][j], min(dp[i-1][j-1], dp[i][j-1])) + 1;
                    else
                        dp[i][j] = 0;
                }
                ans = max(ans, dp[i][j]);
            }
        }
        return ans*ans;
    }