#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n, d, k;
        cin >> n >> k >> d;
        ll a=0;
        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            a += x;
        }
        if(a < k){
            cout << 0 << endl;
            continue;
        }else{
            ll ans = a/k;
            if(ans < d){
                cout << ans << endl;
            }else{
                cout << d << endl;
            }
        }
    }
}