#include <bits/stdc++.h>
using namespace std;
int main()
{

    int budget, n;
    // cin >> budget >> n;
    while (1)
    {
        cin >> budget >> n;
        if(budget == 0 && n == 0){
            break;
        }
        int price[n], fun[n];
        for (int i = 0; i < n; i++)
        {
            int p, f;
            cin >> p >> f;
            price[i] = p;
            fun[i] = f;
        }
        int dp[n+1][budget+1];
        
        for (int i = 0; i < n + 1; i++)
        {
            dp[i][0] = 0;
        }
        for (int i = 0; i < budget + 1; i++)
        {
            dp[0][i] = 0;
        }
        for (int i = 1; i <= n ; i++)
        {
            for (int j = 1; j <= budget ; j++)
            {
                dp[i][j] = dp[i - 1][j];
                if (price[i-1] <= j)
                {
                    dp[i][j] = max(dp[i][j], fun[i-1] + dp[i - 1][j - price[i-1]]);
                }
            }
        }
        // for(int i=1; i<n+1; i++){
        //     for(int j=1; j<budget+1; j++){
        //         cout << dp[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        int optimalb = budget;
        // cout << optimalb << " " << dp[n][budget];
        for (int i = budget; i >= 0; i--)
        {
            if (dp[n][i] == dp[n][budget])
            {
                optimalb = i;
            }
        }
        cout << optimalb << " " << dp[n][budget] << endl;
    }

    return 0;
}
