#include <bits/stdc++.h>
using namespace std;

int max_profit(int *a, int n, int k, int ***dp, int ongoing){
    if(n == 0 ){
        return 0;
    }
    if(k == 0){
        return 0;
    }
    if(dp[n][k][ongoing] >= 0){
        return dp[n][k][ongoing];
    }
    int op1 = max_profit(a+1, n-1, k, dp, ongoing);
    int op2;
    if(ongoing){
        op2 = max_profit(a+1, n-1, k-1, dp, 0) + a[0];
        // dp[n][k][ongoing] = max(ignore, sell);
    }else{
            op2 = max_profit(a+1, n-1, k, dp, 1) - a[0];
            // dp[n][k][ongoing] = max(ignore, buy);
    }
    dp[n][k][ongoing] = max(op1, op2);
    return dp[n][k][ongoing];
}
int main()
{
    int t;
    cin >> t;
    while(t--){
        int k, n;
        cin >> k >> n;
        int stock[n];
        for(int i=0; i<n; i++){
            cin >> stock[i];
        }
        int ***dp = new int**[n+1];
        for(int i=0; i<n+1; i++){
            dp[i] = new int*[k+1];
            for(int j=0; j<k+1; j++){
                dp[i][j] = new int[2];
                for(int a=0; a<2; a++){
                    dp[i][j][a] = -1;
                }
            }
        }
        cout << max_profit(stock, n, k, dp, 0) << endl;
    }
    return 0;
}
