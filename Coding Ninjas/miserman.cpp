#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m; 
    cin >> n >> m;
    int fare[n][m], dp[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> fare[i][j];
        }
    }
    for(int i=0; i<m; i++){
        dp[0][i] = fare[0][i];
    }
    for(int i=1; i<n; i++){
        for(int j=0; j<m; j++){
            if(j == 0){
                dp[i][j] = fare[i][j] + min(dp[i-1][j], dp[i-1][j+1]);
            }else if(j == n-1){
                dp[i][j] = fare[i][j] + min(dp[i-1][j-1], dp[i-1][j]);
            }else{
                dp[i][j] = fare[i][j] + min(dp[i-1][j-1], min(dp[i-1][j], dp[i-1][j+1]));
            }
        }
    }
    int ans = dp[n-1][0];
    cout << ans << endl;
    for(int i=0; i<m; i++){
        ans = min(dp[n-1][i], ans);
    }
    for(int i=1; i<n; i++){
        for(int j=0; j<n; j++){
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    cout << ans << endl;
    return 0;
}
