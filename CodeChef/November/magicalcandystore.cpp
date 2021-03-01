#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int q;
        cin >> q;
        ll total = 0;
        for (int i = 0; i < n; i++)
        {
            if (i != n - 1 && a[i] % 2 == 0)
            {
                total += a[i];
            }
            else
            {
                total += a[i] - 1;
            }
            if (i == n - 1)
            {
                if (a[i] % 2 == 0)
                {
                    total += a[i] - 1;
                }
                else
                {
                    total += a[i];
                }
            }
        }
    }
}