#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, l;
        cin >> n >> k >> l;
        if (k == 1 && n > 1)
        {
            cout << -1 << endl;
        }
        else if (k * l >= n)
        {
            for (int i = 0; i < n;)
            {
                cout << (i % k) + 1 << " ";
                i++;
            }
            cout << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}