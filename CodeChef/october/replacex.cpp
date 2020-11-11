#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, p, x, k;
        cin >> n >> x >> p >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int ans = 0;
        if (x == arr[p - 1])
        {
            ans = 0;
        }
        else if (k == p)
        {
            if (x < arr[p - 1])
            {
                for (int i = p - 1; arr[i] > x && i >= 0; i--)
                    ans++;
            }
            else
            {
                for (int i = p - 1; arr[i] < x && i >= 0 && i < n; i++)
                    ans++;
            }
        }
        else if (k > p)
        {
            if (x > arr[p - 1])
            {
                ans = -1;
            }
            else
            {
                for (int i = p - 1; arr[i] > x && i >= 0; i--)
                    ans++;
            }
        }
        else
        {
            if (x < arr[p - 1])
            {
                ans = -1;
            }
            else
            {
                for (int i = p - 1; arr[i] < x && i >= 0 && i < n; i++)
                    ans++;
            }
        }
        cout << ans << endl;
    }
}