#include <bits/stdc++.h>
using namespace std;
#define MOD int(ie9 + 7)
typedef long long ll;
int n;
int grundy[100000000];

int mex(int a, int b, int c)
{
    // cout << a << " - " << b << " - " << c << endl;
    for (int i = 0; i <= max(a, max(b, c)) + 1; i++)
    {
        if (i != a && i != b && i != c)
        {
            // cout << i << endl;
            return i;
        }
    }
    // cout << "last:" << max(max(a, b), c) + 1 << endl;
    return max(max(a, b), c) + 1;
}
int cal_grundy(int n)
{
    // cout << "n-" << n << endl;
    if (n == 0)
    {
        return 0;
    }
    if (grundy[n] != -1)
    {
        return grundy[n];
    }
    int g2 = cal_grundy(n / 2);
    int g3 = cal_grundy(n / 3);
    int g6 = cal_grundy(n / 6);
    int ans = mex(g2, g3, g6);
    return ans;
}
void solve()
{
    cin >> n;
    for (int i = 0; i <= n; i++)
        grundy[i] = -1;
    cout << cal_grundy(n) << endl;
}

int main()
{

    solve();
    return 0;
}