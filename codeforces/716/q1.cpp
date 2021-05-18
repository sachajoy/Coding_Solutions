#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD int(ie9 + 7)
int n;
void solve()
{
    cin >> n;
    bool flag = true;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        int b = sqrt(a);
        if(b*b != a){
            flag = false;
        }
    }
    if(flag == true){
        cout << "NO" << endl;
    }else{
        cout << "YES" << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}