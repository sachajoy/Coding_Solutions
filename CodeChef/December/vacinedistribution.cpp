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
        ll n, d, risk=0, norisk=0;
        cin >> n >> d;
        for(ll i=0; i<n; i++){
            int x;
            cin >> x;
            if(x >= 80 || x <= 9){
                risk++;
            }else{
                norisk++;
            }
        }
        ll days = 0;
        days = risk/d + norisk/d;
        days = (risk%d != 0) ? days+1 : days;
        days = (norisk%d != 0) ? days+1 : days;
        cout << days << endl;
    }
}