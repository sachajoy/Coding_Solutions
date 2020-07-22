#include <bits/stdc++.h>
using namespace std;

int helper(int* a, int* c, int n, int x, int **dp) {
    if(n==0){
        return 0;
    }

    if(dp[n][x] != -1){
        return dp[n][x];
    }
    if(x == n){
        int ans = c[0] + helper(a+1, c+1, n-1, x-1, dp);
        dp[n][x] = ans;
        return ans;
    }
    if(x == 0){
        int ans = a[0] + helper(a+1, c+1, n-1, x+1, dp);
        dp[n][x] = ans;
        return ans;
    }

    int op1 = c[0] + helper(a+1, c+1, n-1, x-1, dp);
    int op2 = a[0] + helper(a+1, c+1, n-1, x+1, dp);
    int ans = min(op1, op2);
    dp[n][x] = ans;
    return ans;

}
int main(){
    int n;
    cin >> n;
    int a[n], c[n];
    for(int i=0; i<n; i++){
        cin >> c[i] >> a[i];
    }

    int **dp = new int*[n+1];
    for(int i=0; i<=n; i++){
        dp[i] = new int[n+1];
        for(int j=0; j<=n; j++){
            dp[i][j] = -1;
        }
    }
    cout << helper(a, c, n, 0, dp);

    return 0;
}