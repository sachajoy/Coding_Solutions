#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll work(ll n)
{
    return (ll)(-2.0 + sqrt(4.0 + 8 * (n*n + n))) / 4.0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll sum = n * (n + 1) / 2;
        if (sum % 2 == 0)
        {
            ll pivot = work(n);
            ll ans = (n - pivot);
            cout << "P: "<< pivot << endl;
            if (pivot * (pivot + 1) / 2 == sum / 2)
            {
                ans += (pivot * (pivot - 1) / 2) + (n - pivot) * (n - pivot - 1) / 2;
            }
            cout << ans << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }
}