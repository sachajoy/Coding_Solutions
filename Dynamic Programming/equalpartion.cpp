#include <bits/stdc++.h>
using namespace std;

int helper(int *arr, int n, int s1, int s2, int** dp)
{
    if (n == 0)
    {
        return abs(s2 - 2*s1);
    }
    if(dp[n][s1] != -1){
        return dp[n][s1];
    }
    int out1 = helper(arr + 1, n - 1, s1, s2, dp);
    int out2 = helper(arr + 1, n - 1, s1 + arr[0], s2, dp);
    dp[n][s1] = min(out1, out2);
    return min(out1, out2);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            k += arr[i];
        }
        int **dp = new int *[n + 1];
        for (int i = 0; i <= n; i++)
        {
            dp[i] = new int[k + 1];
            for (int j = 0; j <= k; j++)
            {
                dp[i][j] = -1;
            }
        }
        for(int i=0; i<=n; i++){
            dp[i][0] = k;
        }
        cout << helper(arr, n, 0, k, dp) << endl;
    }
}