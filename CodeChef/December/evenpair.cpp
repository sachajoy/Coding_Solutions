#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, aeven, aodd, beven, bodd;
        ll ans;
        cin >> a >> b;
        if (a % 2 == 0)
        {
            aeven = a / 2;
            aodd = aeven;
        }
        else
        {
            aeven = a / 2;
            aodd = aeven + 1;
        }
        if (b % 2 == 0)
        {
            beven = b / 2;
            bodd = beven;
        }
        else
        {
            beven = b / 2;
            bodd = beven + 1;
        }
        ans = (aeven * beven) + (aodd * bodd);
        cout << ans << endl;
    }
}