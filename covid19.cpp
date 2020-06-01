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
        int a[n];
        int curr = 1, min = 11, max = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 1; i < n; i++)
        {
            // cout << " c - " << curr << endl;
            if (a[i] - a[i - 1] <= 2)
            {
                curr++;
            }
            else
            {
                // cout << "updating" << endl;
                if (curr > max)
                {
                    max = curr;
                }
                if (curr < min)
                {
                    min = curr;
                }
                curr = 1;
            }
        }
        if (curr > max)
        {
            max = curr;
        }
        if (curr < min)
        {
            min = curr;
        }
        if (curr == n)
        {
            min = curr;
        }
        cout << min << " " << max << endl;
    }
}