#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n * k];
        for (int i = 0; i < n * k; i++)
            cin >> arr[i];
        long long sum = 0;
        int mid = n - ((n + 1) / 2);
        for (int i = 0; i < k; i++)
        {
            sum += arr[n * k - (i + 1) * (mid + 1)];
        }
        cout << sum << endl;
    }
}
// #include <iostream>
// #include <iomanip>
// #include <vector>
// #include <set>
// #include <map>
// #include <utility>
// #include <climits>
// #include <queue>
// #include <algorithm>
// #include <cmath>
// #include <stack>

// #define int long long
// #define forn(i, n) for (int i = 0; i < n; i++)
// #define dorn(i, n) for (int i = n - 1; i >= 0; i--)

// using namespace std;

// int32_t main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, k;
//         cin >> n >> k;
//         int mid = n - ((n + 1) / 2);
//         int sum = 0;
//         vector<int> a(n * k);
//         forn(i, n * k) cin >> a[i];
//         forn(i, k) sum += a[n * k - (i + 1) * (mid + 1)];
//         cout << sum << '\n';
//     }
// }