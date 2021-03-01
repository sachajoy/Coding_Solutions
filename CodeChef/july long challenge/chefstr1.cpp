#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        ll ans = 0;
        int a, b;
        cin >> a;
        for(int i=1; i<n; i++){
            cin >> b;
            ans += abs(a-b) - 1;
            a = b;
        }
        cout << ans << endl;
    }
}