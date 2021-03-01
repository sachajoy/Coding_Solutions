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
        int arr[n];
        set<int> m;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(arr[i] != 0)
                m.insert(arr[i]);
        }
        count = m.size();
        cout << count << endl;
    }
    return 0;
}