#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n], dp[n] = {INT_MAX-1};
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (arr[n - 1] > 0)
        {
            dp[n - 1] = 0;
        }
        for (int i = n - 2; i >= 0; i--)
        {
            if (arr[i] != 0)
            {
                if (arr[i] >= n - i - 1)
                {
                    dp[i] = 1;
                }
                else
                {
                    for (int j = i + 1; j <= i + arr[i] && j < n; j++)
                    {
                        dp[i] = min(dp[i], dp[j]+1);
                    }
                }
            }
            else
            {
                dp[i] = INT_MAX;
            }
        }
        // for (int i = 0; i < n; i++)
        // {
        //     cout << dp[i] << " ";
        // }
        // cout << endl;
        cout << dp[0] << endl;
    }
    return 0;
}