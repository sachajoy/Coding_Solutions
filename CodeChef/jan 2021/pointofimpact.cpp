#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k, x, y;
        cin >> n >> k >> x >> y;
        ll d[4][2];
        if(x == y){
            cout << n << " " << n << endl;
            continue;
        }
        if (x < y)
        {
            d[0][0] = x + n - y;
            d[0][1] = n;
            d[1][0] = n;
            d[1][1] = n - y + x;
            d[2][0] = y - x;
            d[2][1] = 0;
            d[3][0] = 0;
            d[3][1] = y - x;
        }
        else
        {
            d[0][0] = n;
            d[0][1] = y+n-x;
            d[1][0] = y+n-x;
            d[1][1] = n;
            d[2][0] = 0;
            d[2][1] = x-y;
            d[3][0] = x-y;
            d[3][1] = 0;
        }
        cout << d[(k-1)%4][0] << " " << " " << d[(k-1)%4][1] << endl;
    }
}