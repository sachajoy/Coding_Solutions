#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n, a, b;
    cin >> n >> a >> b;
    ll s = n * 6;
    if (a * b >= s)
    {
        cout << a * b << endl;
        cout << a << " " << b;
    }
    else
    {
        if (a % 3 == 0 || a % 2 == 0)
        {
            b = s / a;
        }
        else if (b % 3 == 0 || b % 2 == 0)
        {
            a = s / b;
        }
        else
        {
            for (int i = a + 1; i <= sqrt(6 * n); i++)
            {
                int newb = s / i;
                if (s <= i * newb && b >= newb)
                {
                    a = i;
                    b = newb;
                    break;
                }
            }
            if (s <= a * b)
            {
                if(a < b){
    
                }
            }
        }
        cout << a * b << endl;
        cout << a << " " << b;
    }
}