#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c0, c1, h;
        cin >> n >> c0 >> c1 >> h;
        string s;
        cin >> s;
        int one = 0, zero = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '1')
            {
                one++;
            }
            else
            {
                zero++;
            }
        }
        int cost = 0;
        if (c0 > c1 && c1 + h < c0)
        {
            cost = c1 * one + (c1 + h) * zero;
        }
        else if (c1 > c0 && c0 + h < c1)
        {
            cost = c0 * zero + (c0 + h) * one;
        }
        else
        {
            cost = c1 * one + c0 * zero;
        }

        cout << cost << endl;
    }
}