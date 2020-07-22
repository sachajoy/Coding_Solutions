#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

int helper(string str)
{
    vector<int> last(26, -1);
    int n = str.length();
    int dp[n + 1];
    dp[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        dp[i] = (2 * dp[i - 1])%MOD;
        if (last[str[i - 1]] != -1)
            dp[i] = dp[i] - dp[last[str[i - 1]]];
        last[str[i - 1]] = (i - 1);
    }
    return dp[n]%MOD;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int size = s.size();
        cout << helper(s) << endl;
    }
}